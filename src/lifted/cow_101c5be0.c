/* f_0x101c5be0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c5be0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c5be0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, int32_t param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    int iVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    CowU32 uVar6;
    wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), COW_IMG(COW_ADDR_LIFT_10337A84));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), param_2);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10337C90));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), COW_IMG(COW_ADDR_LIFT_10337C8C));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe6)), param_3);
      if (param_6 == (CowU32)0x0) {
    L_101c5c7e:
        wr8((uint32_t)((int)param_1 + 0x12), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe7)), 0);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0xe8)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a4)), 0);
      }
      else {
        uVar6 = 0xffffffff;
        pcVar5 = param_6;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = rd8((uint32_t)pcVar5);
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar3 = cow_bridge_101b7280(g, COW_IMG(COW_ADDR_LIFT_101C5C39), 6u, (const CowU32[]){ param_6, ~uVar6 - 1, (int)param_1 + 0x1d5, param_3 + 1, 0, 0 }, g->ecx, g->edx, param_2, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe7)), iVar3);
        if (iVar3 < 1) goto L_101c5c7e;
        pcVar5 = (CowU32)((int)param_1 + 0x12);
        pcVar4 = param_6;
        do {
          cVar1 = rd8((uint32_t)pcVar4);
          wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)pcVar5 - (int)param_6)), cVar1);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar3 = 0x3a0 - (int)pcVar5;
        do {
          cVar1 = rd8((uint32_t)pcVar5);
          wr8((uint32_t)(pcVar5 + 1u * (uint32_t)((int)param_1 + iVar3)), cVar1);
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = 0xffffffff;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = rd8((uint32_t)param_6);
          param_6 = param_6 + 1;
        } while (cVar1 != '\0');
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a4)), ~uVar6 - 1);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a7)), param_5);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a6)), param_4);
      switch(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)))) {
      case 1:
      case 2:
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
        wr8((uint32_t)((int)param_1 + 0xe), 0);
        wr8((uint32_t)((int)param_1 + 0xf), 0);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
        wr8((uint32_t)((int)param_1 + 0x11), 0);
        break;
      case 3:
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
        wr8((uint32_t)((int)param_1 + 0xe), 0);
        wr8((uint32_t)((int)param_1 + 0x11), 0);
        goto L_101c5d03;
      case 4:
      case 10:
      case 0xb:
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
        wr8((uint32_t)((int)param_1 + 0xe), 0);
        wr8((uint32_t)((int)param_1 + 0xf), 0);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(4)), 1);
        wr8((uint32_t)((int)param_1 + 0x11), 0);
        break;
      case 5:
      case 6:
      case 7:
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
        wr8((uint32_t)((int)param_1 + 0xe), 0);
        goto L_101c5d00;
      case 8:
        wr8((uint32_t)((int)param_1 + 0xe), 0);
        goto L_101c5cfd;
      case 9:
        wr8((uint32_t)((int)param_1 + 0xe), 1);
    L_101c5cfd:
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(3)), 1);
    L_101c5d00:
        wr8((uint32_t)((int)param_1 + 0x11), 1);
    L_101c5d03:
        wr8((uint32_t)((int)param_1 + 0xf), 1);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(4)), 1);
        break;
      default:
        goto switchD_101c5cb0_default;
      }
      wr8((uint32_t)((int)param_1 + 0xd), 0);
    switchD_101c5cb0_default:
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x1a5)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a9)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1aa)), param_8);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1ac)), param_7);
      if (param_9 == 0x114) {
        sVar2 = (((uint64_t)(rd32(COW_IMG(COW_ADDR_LIFT_106218B8))) << 16) & 0xffffu) - (((uint64_t)(rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) << 16) & 0xffffu);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a8)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1ab)), sVar2 + -0xac);
        g->eax = (CowU32)(param_1); return;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1ab)), param_9);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a8)), 0);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 9 parameter(s), cleanup 32 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 32.
   Arguments: 1 register argument(s) [ecx], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c5be0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    g->eax = param_2;   /* 0x101c5be0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c5be4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101c5be5: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101c5be6: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c5bea: push esi */
    g->esi = g->ecx;   /* 0x101c5beb: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x101c5bed: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c5bef: push edi */
    cow_lift_101c5be0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */
