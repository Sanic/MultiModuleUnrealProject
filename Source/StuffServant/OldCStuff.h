// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

extern "C" {
	#define OLD_C_STUFF_IS_GOOD 23

	int STUFFSERVANT_API do_old_stuff(int x);
}

#define OTHER_OLD_C_STUFF_IS_GOOD 44
int STUFFSERVANT_API do_other_old_stuff(int x);