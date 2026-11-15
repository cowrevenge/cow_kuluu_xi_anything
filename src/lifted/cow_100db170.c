/* f_0x100db170 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100db170 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100db170(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x98)) == 0) goto switchD_100db19b_caseD_c;
      switch(param_2) {
      case 0:
        wr32((uint32_t)(param_1 + 0x88), 0);
        wr32((uint32_t)(param_1 + 0xc), 0);
        wr32((uint32_t)(param_1 + 0x90), 100);
        g->eax = (CowU32)(1); return;
      case 1:
        wr32((uint32_t)(param_1 + 0xc), 0);
        wr32((uint32_t)(param_1 + 0x88), 1);
        wr32((uint32_t)(param_1 + 0x90), 100);
        g->eax = (CowU32)(1); return;
      case 2:
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
        if ((((iVar1 == 1) || (iVar1 == 0x13)) || (iVar1 == 3)) ||
           (((iVar1 == 4 || (iVar1 == 0x14)) || ((iVar1 == 0x16 || ((iVar1 == 0x17 || (iVar1 == 5)))))))
           ) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x88), 2);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 3:
        if (((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 2) || ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 1)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 3);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 4:
        if (((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 1) || ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x14)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 4);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 5:
        if (((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 2) || ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 1)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 5);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 6:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x10)) != 0) {
          cow_bridge_100f78c0(g, COW_IMG(COW_ADDR_LIFT_100DB43D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
        if (((((iVar1 != 10) && (iVar1 != 3)) && (iVar1 != 0xb)) && ((iVar1 != 0xe && (iVar1 != 0xc))))
           && (iVar1 != 0x15)) break;
        wr32((uint32_t)(param_1 + 0x88), 6);
        wr32((uint32_t)(param_1 + 0x90), 100);
        if ((int32_t)rd32((uint32_t)(param_1 + 0x98)) != 3) {
          wr32((uint32_t)(param_1 + 0xc), 0xf);
          g->eax = (CowU32)(1); return;
        }
        goto L_100db555;
      case 7:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 6) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x88), 7);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 8:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 6) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x88), 8);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 9:
        if (((int32_t)rd32((uint32_t)(param_1 + 0x88)) != 7) && ((int32_t)rd32((uint32_t)(param_1 + 0x88)) != 8)) break;
        param_2 = 9;
        wr32((uint32_t)(param_1 + 0x8c), 9);
      case 0xc:
      case 0x15:
      case 0xc9:
      case 0xca:
      case 0xcb:
    switchD_100db19b_caseD_c:
        wr32((uint32_t)(param_1 + 0x88), param_2);
        wr32((uint32_t)(param_1 + 0x90), 100);
    L_100db555:
        wr32((uint32_t)(param_1 + 0xc), 0);
        g->eax = (CowU32)(1); return;
      case 10:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) == 9) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x88), 10);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 0xb:
      case 0xe:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) != 9) break;
        goto switchD_100db19b_caseD_c;
      case 0x11:
        wr32((uint32_t)(param_1 + 0xc), 0);
        wr32((uint32_t)(param_1 + 0x84), param_3);
        wr32((uint32_t)(param_1 + 0x88), 0x11);
        wr32((uint32_t)(param_1 + 0x90), 100);
        g->eax = (CowU32)(1); return;
      case 0x12:
        wr32((uint32_t)(param_1 + 0xc), 0);
        wr32((uint32_t)(param_1 + 0x84), param_3);
        wr32((uint32_t)(param_1 + 0x88), 0x12);
        wr32((uint32_t)(param_1 + 0x90), 100);
        g->eax = (CowU32)(1); return;
      case 0x13:
        wr32((uint32_t)(param_1 + 0xc), 0);
        wr32((uint32_t)(param_1 + 0x88), 0x13);
        wr32((uint32_t)(param_1 + 0x90), 100);
        g->eax = (CowU32)(1); return;
      case 0x14:
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
        if (((iVar1 == 2) || (iVar1 == 1)) || (iVar1 == 0x14)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 0x14);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 0x16:
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
        if (((iVar1 == 2) || (iVar1 == 1)) || (iVar1 == 0x16)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 0x16);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 0x17:
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
        if (((iVar1 == 2) || (iVar1 == 1)) || (iVar1 == 0x17)) {
          wr32((uint32_t)(param_1 + 0xc), 0);
          wr32((uint32_t)(param_1 + 0x80), param_3);
          wr32((uint32_t)(param_1 + 0x88), 0x17);
          wr32((uint32_t)(param_1 + 0x90), 100);
          g->eax = (CowU32)(1); return;
        }
      }
      wr32((uint32_t)(param_1 + 0x94), 0xc9);
      cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DB579), 2u, (const CowU32[]){ 0xc9, 0 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100db170(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100db170: push esi */
    g->esi = g->ecx;   /* 0x100db171: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100db173: push edi */
    g->edi = 0u;   /* 0x100db174: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x98u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100db176: register eax, replayed as the entry ran it */
    cow_lift_100db170(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
