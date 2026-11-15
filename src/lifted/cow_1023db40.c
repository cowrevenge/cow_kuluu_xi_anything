/* f_0x1023db40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023db40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023db40(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 pcVar6;
    CowU32 local_40[16];
    _Bool bVar7;
      
      iVar4 = 0;
      puVar5 = local_40;
      do {
        iVar1 = cow_bridge_100db6e0(g, COW_IMG(COW_ADDR_LIFT_1023DB59), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar1 != 0) && ((iVar1 == 1 || (iVar1 == 2)))) {
          pcVar2 = (CowU32)cow_bridge_100db6d0(g, COW_IMG(COW_ADDR_LIFT_1023DB78), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
          iVar1 = 2;
          bVar7 = 1;
          pcVar6 = (CowU32)COW_IMG(COW_ADDR_LIFT_1034F2B8);
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar7 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar6);
            pcVar2 = pcVar2 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if (!bVar7) {
            uVar3 = cow_bridge_100db790(g, COW_IMG(COW_ADDR_LIFT_1023DB91), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, 0u, 0u);
            wr32((uint32_t)puVar5, uVar3);
            puVar5 = puVar5 + 4u * (uint32_t)(1);
          }
        }
        iVar4 = iVar4 + 1;
        if (0xf < iVar4) {
          return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 64 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023db40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 0x40u;                      /* 0x1023db40: 64 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1023db43: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1023db44: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023db45: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1023db46: push edi */
    g->ebx = 0u;   /* 0x1023db47: the value the entry loaded and the decompiler dropped */
    cow_lift_1023db40(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
