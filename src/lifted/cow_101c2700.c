/* f_0x101c2700 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c2700 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c2700(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 psVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 piVar5;
    _Bool bVar1;
      
      iVar3 = rd32((uint32_t)(param_1 + 4));
      if (iVar3 == 0) {
        uVar4 = 0;
        while( 1 ) {
          iVar3 = rd32((uint32_t)(param_1 + 0x80));
          bVar1 = 0;
          if (iVar3 == 0) break;
          piVar5 = (CowU32)(param_1 + 0xc);
          do {
            if (((param_2 < rd32((uint32_t)(param_1 + 0x44))) && (rd32((uint32_t)piVar5) != 0)) &&
               (rd32((uint32_t)(rd32((uint32_t)piVar5) + param_2 * 8)) != 0)) {
              bVar1 = 1;
            }
            piVar5 = piVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          if (!bVar1) {
            g->eax = (CowU32)(uVar4); return;
          }
          uVar4 = uVar4 + 1;
          param_2 = param_2 + 1;
        }
      }
      else if (iVar3 == 1) {
        if (rd32((uint32_t)(param_1 + 200)) <= param_2) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        uVar4 = 0;
        psVar2 = (CowU32)(rd32((uint32_t)(param_1 + 0xc4)) + param_2 * 2);
        while ((rd16((uint32_t)psVar2) != 0 || (rd8((uint32_t)(param_2 + rd32((uint32_t)(param_1 + 0xbc)))) != '\0'))) {
          uVar4 = uVar4 + 1;
          param_2 = param_2 + 1;
          psVar2 = psVar2 + 1;
          if (rd32((uint32_t)(param_1 + 200)) <= param_2) {
            g->eax = (CowU32)(uVar4); return;
          }
        }
      }
      else if (iVar3 == 2) {
        if (rd32((uint32_t)(param_1 + 200)) <= param_2) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        uVar4 = 0;
        psVar2 = (CowU32)(rd32((uint32_t)(param_1 + 0xc4)) + param_2 * 2);
        if (rd16((uint32_t)(rd32((uint32_t)(param_1 + 0xc4)) + param_2 * 2)) != 0) {
          while( 1 ) {
            uVar4 = uVar4 + 1;
            param_2 = param_2 + 1;
            psVar2 = psVar2 + 1;
            if (rd32((uint32_t)(param_1 + 200)) <= param_2) break;
            if (rd16((uint32_t)psVar2) == 0) {
              g->eax = (CowU32)(uVar4); return;
            }
          }
        }
      }
      else {
        uVar4 = param_2;
      }
      g->eax = (CowU32)(uVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c2700(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101c2700: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c2703: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101c2704: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c2705: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x101c2706: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c2709: push edi */
    cow_lift_101c2700(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
