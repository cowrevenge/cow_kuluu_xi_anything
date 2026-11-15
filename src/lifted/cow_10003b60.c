/* f_0x10003b60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10003b60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10003b60(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    iVar3 = 0;
      cow_bridge_indirect(g, rd32((uint32_t)(g->ecx + 0xc8u)), COW_IMG(COW_ADDR_LIFT_10003B7D), 3u, (const CowU32[]){ g->eax, 28u, g->esi }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003B93), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x19, 5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003BA8), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x18, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003BBE), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x1b, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003BD4), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x13, 5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003BEA), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x14, 6 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C01), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0x10, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C18), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0x11, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C2F), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 1, 5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C45), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 2, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C5C), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 3, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C73), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 4, 5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003C89), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 5, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003CA0), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 6, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003CB8), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 1, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10003CD0), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 4, 1 }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = 0;
      iVar4 = 0;
      iVar1 = 0;
      do {
        if ((int32_t)rd32((uint32_t)(iVar3 + 4 + (int32_t)rd32((uint32_t)(param_1 + 0xc)))) != -1) {
          cow_bridge_10003d70(g, COW_IMG(COW_ADDR_LIFT_10003D00), 3u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 0x10)) + iVar4, (int32_t)rd32((uint32_t)(param_1 + 0x14)) + iVar2, rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)) + iVar1)) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar3 = iVar3 + 8;
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + 0x400;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < 0x4800);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003D35), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x1b, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003D4A), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0xe, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10003D60), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 7, 1 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10003b60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10003b60: push ecx */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1045666C));   /* 0x10003b61: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10003b66: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10003b67: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10003b68: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0xCu); g->eax = (uint32_t)(rd32(A)); }   /* 0x10003b69: register eax, replayed as the entry ran it */
    g->esi = 0u;   /* 0x10003b6c: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10003b6e: push edi */
    g->edi = g->ecx;   /* 0x10003b6f: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10003b71: register ecx, replayed as the entry ran it */
    cow_lift_10003b60(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
