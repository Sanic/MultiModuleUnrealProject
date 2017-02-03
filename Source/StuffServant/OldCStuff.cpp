// Fill out your copyright notice in the Description page of Project Settings.

#include "StuffServant.h"
#include "OldCStuff.h"
extern "C" {
	int do_old_stuff(int x) {
		return x + 1;
	}
}

int do_other_old_stuff(int x) {
	return x + 1;
}