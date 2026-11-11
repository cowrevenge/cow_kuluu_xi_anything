/* f_0x100e9cc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e9cc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e9cc0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    CowU16 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    if (rd32((uint32_t)(param_3 + 4)) != 0) {
        bVar3 = rd8((uint32_t)(param_3 + 0x18));
        uVar7 = (CowU32)bVar3;
        bVar2 = 0;
        do {
          if (bVar3 == 5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar7;
          }
          if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + (CowU32)bVar2 * 0x70 + 0x57ec + uVar5 * 0x8c4)) ==
              rd32((uint32_t)(param_3 + 4))) {
            if (bVar3 == 5) {
              uVar7 = 0;
            }
            iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + (CowU32)bVar2 * 0x70 + 0x57d8 + uVar7 * 0x8c4;
            wr16((uint32_t)(iVar1 + 0x18), rd16((uint32_t)(param_3 + 0x14)));
            wr32((uint32_t)(iVar1 + 0x20), rd32((uint32_t)(param_3 + 8)));
            wr8((uint32_t)(iVar1 + 0x2c), rd8((uint32_t)(param_3 + 0x16)));
            wr32((uint32_t)(iVar1 + 0x24), rd32((uint32_t)(param_3 + 0xc)));
            wr8((uint32_t)(iVar1 + 0x2d), rd8((uint32_t)(param_3 + 0x17)));
            wr32((uint32_t)(iVar1 + 0x28), rd32((uint32_t)(param_3 + 0x10)));
            uVar6 = cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100E9DB2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(iVar1 + 0x1c), uVar6);
            if (rd8((uint32_t)(param_3 + 0x19)) == '\0') {
              uVar4 = 0;
            }
            else {
              uVar4 = rd16((uint32_t)(param_3 + 0x1a));
            }
            wr16((uint32_t)(iVar1 + 0x1a), uVar4);
            wr16((uint32_t)(iVar1 + 0x4c), rd16((uint32_t)(param_3 + 0x1c)));
            wr8((uint32_t)(iVar1 + 0x4e), rd8((uint32_t)(param_3 + 0x1e)));
            wr8((uint32_t)(iVar1 + 0x4f), rd8((uint32_t)(param_3 + 0x1f)));
            wr8((uint32_t)(iVar1 + 0x50), 0);
            wr8((uint32_t)(iVar1 + 0x69), rd8((uint32_t)(param_3 + 0x20)));
            wr8((uint32_t)(iVar1 + 0x6a), rd8((uint32_t)(param_3 + 0x21)));
            wr8((uint32_t)(iVar1 + 0x6b), rd8((uint32_t)(param_3 + 0x22)));
            wr8((uint32_t)(iVar1 + 0x6c), rd8((uint32_t)(param_3 + 0x23)));
            wr8((uint32_t)(iVar1 + 0x6d), rd8((uint32_t)(param_3 + 0x24)));
            bVar3 = (rd8((uint32_t)(param_3 + 0x25)) ^ rd8((uint32_t)(iVar1 + 0x6e))) & 1 ^ rd8((uint32_t)(iVar1 + 0x6e));
            wr8((uint32_t)(iVar1 + 0x6e), bVar3);
            wr8((uint32_t)(iVar1 + 0x6e), (rd8((uint32_t)(param_3 + 0x25)) ^ bVar3) & 2 ^ bVar3);
            cow_bridge_100e9a70(g, COW_IMG(COW_ADDR_LIFT_100E9E21), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(1); return;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < 0x14);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e9cc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100e9cc0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100e9cc1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100e9cc2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e9cc3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100e9cc4: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100e9cc5: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100e9cc9: register eax, replayed as the entry ran it */
    cow_lift_100e9cc0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
