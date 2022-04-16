import { Component, ViewChild, OnInit } from '@angular/core';
import { MatPaginator } from '@angular/material/paginator';
import { MatSort } from '@angular/material/sort';
import { MatTable } from '@angular/material/table';
import { Product } from '../product.model';
import { ProductService } from './../product.service';

@Component({
  selector: 'app-product-read',
  templateUrl: './product-read.component.html',
  styleUrls: ['./product-read.component.css']
})
export class ProductReadComponent implements OnInit {

  @ViewChild(MatPaginator) paginator!: MatPaginator;
  @ViewChild(MatSort) sort!: MatSort;
  @ViewChild(MatTable) table!: MatTable<Product>;
  products: Product[]
  displayedColumns = ['id', 'name', 'price', 'action']

  constructor(private productService: ProductService) { 
    this.products = [];
  }

  ngOnInit(): void { 
    this.productService.read().subscribe(products => {
      this.products = products;
    })
  }

}
