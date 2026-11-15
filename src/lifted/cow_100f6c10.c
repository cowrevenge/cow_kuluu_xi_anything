/* f_0x100f6c10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f6c10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f6c10(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    int iVar3;
    CowU32 psVar4;
    iVar3 = 0;
      do {
        iVar2 = cow_bridge_1030ff73(g, COW_IMG(COW_ADDR_LIFT_100F6C21), 2u, (const CowU32[]){ iVar3, param_3 }, g->ecx, g->edx, g->eax, 8u);
        if (((iVar2 == 0) && ((rd32((uint32_t)(param_3 + 0x98)) & 1) != 0)) &&
           (((char)param_2 != '\0' || ((rd32((uint32_t)(param_3 + 8)) & 0x10000000) == 0)))) {
          iVar2 = 0;
          psVar4 = (CowU32)(param_3 + 0x1a);
          do {
            if (((((rd8((uint32_t)(psVar4 + 2u * (uint32_t)(-1))) & 1) != 0) && (sVar1 = cow_bridge_1031012b(g, COW_IMG(COW_ADDR_LIFT_100F6C5B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), sVar1 == rd16((uint32_t)psVar4))) &&
                (param_1 == (int32_t)rd32((uint32_t)(psVar4 + 2u * (uint32_t)(3))))) && ((int32_t)rd32((uint32_t)(psVar4 + 2u * (uint32_t)(5))) == 0)) {
              g->eax = (CowU32)(param_3); return;
            }
            iVar2 = iVar2 + 1;
            psVar4 = psVar4 + 2u * (uint32_t)(8);
          } while (iVar2 < 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 200);
      iVar3 = 0;
      do {
        iVar2 = cow_bridge_1030ff89(g, COW_IMG(COW_ADDR_LIFT_100F6C8D), 2u, (const CowU32[]){ iVar3, param_3 }, g->ecx, g->edx, g->eax, 8u);
        if ((iVar2 == 0) && ((rd32((uint32_t)(param_3 + 0x98)) & 1) != 0)) {
          iVar2 = 0;
          psVar4 = (CowU32)(param_3 + 0x1a);
          do {
            if ((((rd8((uint32_t)(psVar4 + 2u * (uint32_t)(-1))) & 1) != 0) && (sVar1 = cow_bridge_1031012b(g, COW_IMG(COW_ADDR_LIFT_100F6CB3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), sVar1 == rd16((uint32_t)psVar4))) &&
               ((param_1 == (int32_t)rd32((uint32_t)(psVar4 + 2u * (uint32_t)(3))) && ((int32_t)rd32((uint32_t)(psVar4 + 2u * (uint32_t)(5))) == 0)))) {
              g->eax = (CowU32)(param_3); return;
            }
            iVar2 = iVar2 + 1;
            psVar4 = psVar4 + 2u * (uint32_t)(8);
          } while (iVar2 < 8);
        }
        iVar3 = iVar3 + 1;
        if (99 < iVar3) {
          g->eax = (CowU32)(0); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f6c10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f6c10: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100f6c11: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100f6c12: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f6c16: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100f6c17: push edi */
    g->ebx = 0u;   /* 0x100f6c18: the value the entry loaded and the decompiler dropped */
    cow_lift_100f6c10(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
