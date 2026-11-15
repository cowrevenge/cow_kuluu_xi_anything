/* f_0x100c1190 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100c1190 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100c1190(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    if (rd32((uint32_t)param_1) != 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), param_2);
      wr32((uint32_t)param_1, 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c0)), param_2 + 0x621);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c1)), param_2 + 5);
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x44)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1bc)), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10480A94), 0xffffffff);
      iVar2 = 0xc64;
      wr32(COW_IMG(COW_ADDR_LIFT_10480A98), 0xffffffff);
      wr32(COW_IMG(COW_ADDR_LIFT_10480A9C), 0xffffffff);
      wr32(COW_IMG(COW_ADDR_LIFT_10480AA0), 0xffffffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
      do {
        wr32((uint32_t)((int)param_1 + iVar2 + -0xc14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + iVar2);
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0xd04);
      iVar2 = 0xc50;
      do {
        wr32((uint32_t)((int)param_1 + iVar2 + -0xb60), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + iVar2);
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0xc64);
      piVar3 = param_1 + 4u * (uint32_t)(0x41);
      iVar2 = 3;
      do {
        wr32((uint32_t)piVar3, (int)(piVar3 + 4u * (uint32_t)(0x17c)));
        piVar3 = piVar3 + 4u * (uint32_t)(1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      piVar3 = param_1 + 4u * (uint32_t)(4);
      wr32((uint32_t)piVar3, (int)COW_IMG(COW_ADDR_LIFT_103D3C84));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), (int)COW_IMG(COW_ADDR_LIFT_103D3C84));
      iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(iVar2 + 0xbfe)))));
      if (iVar4 == 0) {
        wr32((uint32_t)piVar3, iVar2 + 0x1104);
        iVar2 = cow_bridge_1008aa60(g, COW_IMG(COW_ADDR_LIFT_100C1290), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(iVar2 + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), (CowU32)(iVar2 == 0));
        iVar2 = cow_bridge_1008aa10(g, COW_IMG(COW_ADDR_LIFT_100C12CE), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab90(g, COW_IMG(COW_ADDR_LIFT_100C12E9), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008abc0(g, COW_IMG(COW_ADDR_LIFT_100C1304), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab50(g, COW_IMG(COW_ADDR_LIFT_100C131F), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 16u);
    L_100c13ac:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), 2 - (CowU32)(iVar2 != 0));
      }
      else {
        if ((int16_t)rd16((uint32_t)(iVar4 + 0x210)) == 0) {
          iVar4 = iVar4 + 0x7c;
        }
        else {
          iVar4 = iVar4 + 0x214;
        }
        wr32((uint32_t)piVar3, iVar4);
        iVar2 = cow_bridge_1008aa60(g, COW_IMG(COW_ADDR_LIFT_100C133E), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(iVar2 + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), (CowU32)(iVar2 == 0));
        if ((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe))))) + 0x78)) & 0xff000000) != 0) {
          iVar2 = cow_bridge_1008aa10(g, COW_IMG(COW_ADDR_LIFT_100C1358), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), (CowU32)(iVar2 != 0));
          iVar2 = cow_bridge_1008ab90(g, COW_IMG(COW_ADDR_LIFT_100C1373), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), (CowU32)(iVar2 != 0));
          iVar2 = cow_bridge_1008abc0(g, COW_IMG(COW_ADDR_LIFT_100C138E), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), (CowU32)(iVar2 != 0));
          iVar2 = cow_bridge_1008ab50(g, COW_IMG(COW_ADDR_LIFT_100C13A9), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 20u);
          goto L_100c13ac;
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), 1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), 1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), 0);
      }
      iVar2 = cow_bridge_1008aab0(g, COW_IMG(COW_ADDR_LIFT_100C13C8), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), iVar2);
      iVar2 = cow_bridge_1008ab00(g, COW_IMG(COW_ADDR_LIFT_100C13DD), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xbfe)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), iVar2);
      iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(iVar2 + 0xc00)))));
      if (iVar4 == 0) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar2 + 0x1204);
        iVar2 = cow_bridge_1008aa60(g, COW_IMG(COW_ADDR_LIFT_100C1424), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(iVar2 + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (CowU32)(iVar2 == 0));
        iVar2 = cow_bridge_1008aa10(g, COW_IMG(COW_ADDR_LIFT_100C1462), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab90(g, COW_IMG(COW_ADDR_LIFT_100C147D), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008abc0(g, COW_IMG(COW_ADDR_LIFT_100C1498), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab50(g, COW_IMG(COW_ADDR_LIFT_100C14B3), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 16u);
      }
      else {
        if ((int16_t)rd16((uint32_t)(iVar4 + 0x210)) == 0) {
          iVar4 = iVar4 + 0x7c;
        }
        else {
          iVar4 = iVar4 + 0x214;
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar4);
        iVar2 = cow_bridge_1008aa60(g, COW_IMG(COW_ADDR_LIFT_100C14D3), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(iVar2 + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (CowU32)(iVar2 == 0));
        if ((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00))))) + 0x78)) & 0xff000000) == 0) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), 1);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), 1);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 1);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0);
          goto L_100c154b;
        }
        iVar2 = cow_bridge_1008aa10(g, COW_IMG(COW_ADDR_LIFT_100C14ED), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab90(g, COW_IMG(COW_ADDR_LIFT_100C1508), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008abc0(g, COW_IMG(COW_ADDR_LIFT_100C1523), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), (CowU32)(iVar2 != 0));
        iVar2 = cow_bridge_1008ab50(g, COW_IMG(COW_ADDR_LIFT_100C153E), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 20u);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 2 - (CowU32)(iVar2 != 0));
    L_100c154b:
      iVar2 = cow_bridge_1008aab0(g, COW_IMG(COW_ADDR_LIFT_100C155D), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), iVar2);
      iVar2 = cow_bridge_1008ab00(g, COW_IMG(COW_ADDR_LIFT_100C1572), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0xc00)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), iVar2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1bd)), (CowU8)~(CowU8)((CowU32)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x124)) >> 0x19) & 1);
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if ((((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) != 0) && ((uVar1 == 2 || (uVar1 == 3)))) ||
         (uVar1 < 4)) {
        switch(uVar1) {
        default:
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1bf)), iVar2);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1be)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x10))));
          break;
        case 2:
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1bf)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xf))));
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1be)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xe))));
          wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x1bb)), 0);
          g->eax = (CowU32)(1); return;
        }
      }
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x1bb)), 0);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebp, esi, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100c1190(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100c1190: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100c1191: push esi */
    g->esi = g->ecx;   /* 0x100c1192: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100c1194: the value the entry loaded and the decompiler dropped */
    cow_lift_100c1190(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
