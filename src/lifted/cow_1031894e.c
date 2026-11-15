/* f_0x1031894e - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1031894e (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1031894e(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    _Bool bVar2;
      _Bool bVar3;
      _Bool bVar4;
      
      bVar4 = 0;
      bVar3 = 0;
      cVar1 = rd8((uint32_t)param_2);
      if (cVar1 == 'a') {
        uVar6 = 0x109;
      }
      else {
        if (cVar1 == 'r') {
          uVar6 = 0;
          uVar7 = rd32(COW_IMG(COW_ADDR_LIFT_109B2A40)) | 1;
          goto L_1031898f;
        }
        if (cVar1 != 'w') {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        uVar6 = 0x301;
      }
      uVar7 = rd32(COW_IMG(COW_ADDR_LIFT_109B2A40)) | 2;
    L_1031898f:
      bVar2 = 1;
    L_10318992:
      cVar1 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)));
      param_2 = param_2 + 1;
      if ((cVar1 == '\0') || (!bVar2)) {
        iVar5 = cow_bridge_10315ed6(g, COW_IMG(COW_ADDR_LIFT_10318A92), 4u, (const CowU32[]){ param_1, uVar6, param_3, 0x1a4 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar5 < 0) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_109B271C), rd32(COW_IMG(COW_ADDR_LIFT_109B271C)) + 1);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(3)), uVar7);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(1)), 0);
        wr32((uint32_t)param_4, 0);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(2)), 0);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(7)), 0);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(4)), iVar5);
        g->eax = (CowU32)(param_4); return;
      }
      if (cVar1 < 'U') {
        if (cVar1 == 'T') {
          if ((uVar6 & 0x1000) == 0) {
            uVar6 = uVar6 | 0x1000;
            goto L_10318992;
          }
        }
        else if (cVar1 == '+') {
          if ((uVar6 & 2) == 0) {
            uVar6 = uVar6 & 0xfffffffe | 2;
            uVar7 = uVar7 & 0xfffffffc | 0x80;
            goto L_10318992;
          }
        }
        else if (cVar1 == 'D') {
          if ((uVar6 & 0x40) == 0) {
            uVar6 = uVar6 | 0x40;
            goto L_10318992;
          }
        }
        else if (cVar1 == 'R') {
          if (!bVar3) {
            bVar3 = 1;
            uVar6 = uVar6 | 0x10;
            goto L_10318992;
          }
        }
        else if ((cVar1 == 'S') && (!bVar3)) {
          bVar3 = 1;
          uVar6 = uVar6 | 0x20;
          goto L_10318992;
        }
      }
      else {
        if (cVar1 == 'b') {
          if ((uVar6 & 0xc000) != 0) goto L_10318a72;
          uVar6 = uVar6 | 0x8000;
          goto L_10318992;
        }
        if (cVar1 == 'c') {
          if (!bVar4) {
            bVar4 = 1;
            uVar7 = uVar7 | 0x4000;
            goto L_10318992;
          }
        }
        else {
          if (cVar1 != 'n') {
            if ((cVar1 != 't') || ((uVar6 & 0xc000) != 0)) goto L_10318a72;
            uVar6 = uVar6 | 0x4000;
            goto L_10318992;
          }
          if (!bVar4) {
            bVar4 = 1;
            uVar7 = uVar7 & 0xffffbfff;
            goto L_10318992;
          }
        }
      }
    L_10318a72:
      bVar2 = 0;
      goto L_10318992;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1031894e(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1031894e: push ebp */
    g->ebp = g->esp;                       /* 0x1031894f: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10318951: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10318952: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10318953: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10318954: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_109B2A40));   /* 0x10318955: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1031895b: push edi */
    g->edi = param_4;   /* 0x1031895c: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1031895f: the value the entry loaded and the decompiler dropped */
    cow_lift_1031894e(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
