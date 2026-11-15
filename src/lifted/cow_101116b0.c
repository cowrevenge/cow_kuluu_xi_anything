/* f_0x101116b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101116b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101116b0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    int iVar4;
    CowU8 local_d;
    CowU32 local_4;
    local_d = 0;
      local_4 = rd32((uint32_t)(param_1 + 0x54));
      do {
        if ((rd32((uint32_t)(local_4 + 4u * (uint32_t)(1))) == 0) || ((CowU32)rd32((uint32_t)(local_4 + 4u * (uint32_t)(2))) == (CowU32)0x0)) {
          g->eax = (CowU32)(local_d); return;
        }
        iVar1 = rd32((uint32_t)local_4);
        iVar4 = 0;
        puVar3 = param_2;
        do {
          uVar2 = rd32((uint32_t)((iVar1 - (int)param_2) + (int)puVar3));
          if (rd32((uint32_t)puVar3) < uVar2) {
            g->eax = (CowU32)(local_d); return;
          }
          if (uVar2 < rd32((uint32_t)puVar3)) break;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 4u * (uint32_t)(1);
        } while (iVar4 < 3);
        iVar4 = 0;
        puVar3 = param_2;
        do {
          uVar2 = rd32((uint32_t)((iVar1 - (int)param_2) + (int)puVar3));
          if (rd32((uint32_t)puVar3) < uVar2) break;
          if (uVar2 < rd32((uint32_t)puVar3)) goto L_1011172d;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 4u * (uint32_t)(1);
        } while (iVar4 < 3);
        if ((int32_t)rd32((uint32_t)(iVar1 + 0xc)) == 0) {
          local_d = rd8((uint32_t)(iVar1 + 0x18));
        }
        else {
          iVar4 = 0;
          puVar3 = param_3;
          do {
            uVar2 = rd32((uint32_t)((iVar1 - (int)param_3) + (int)puVar3));
            if (rd32((uint32_t)puVar3) < uVar2) {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(local_d) & 0xffu)); return;
            }
            if (uVar2 < rd32((uint32_t)puVar3)) break;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 4u * (uint32_t)(1);
          } while (iVar4 < 3);
          iVar4 = 0;
          puVar3 = param_3;
          while( 1 ) {
            uVar2 = rd32((uint32_t)((iVar1 - (int)param_3) + (int)puVar3));
            if (rd32((uint32_t)puVar3) < uVar2) goto L_10111775;
            if (uVar2 < rd32((uint32_t)puVar3)) break;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 4u * (uint32_t)(1);
            if (2 < iVar4) {
    L_10111775:
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(rd8((uint32_t)(rd32((uint32_t)local_4) + 0x18))) & 0xffu)); return;
            }
          }
        }
    L_1011172d:
        local_4 = (CowU32)rd32((uint32_t)(local_4 + 4u * (uint32_t)(2)));
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 16 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101116b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x10u;                      /* 0x101116b0: 16 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x54u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101116b3: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101116b6: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101116ba: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101116bb: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101116bc: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101116b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
