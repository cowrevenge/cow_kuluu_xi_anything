/* f_0x102c9860 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c9860 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c9860(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    int local_8;
    iVar4 = param_2;
      uVar1 = rd32((uint32_t)(param_1 + 0x30));
      uVar7 = rd32((uint32_t)(param_1 + 0x34));
      local_8 = (int32_t)rd32((uint32_t)(param_2 + 0xc));
      if (uVar7 < uVar1) {
        uVar7 = rd32((uint32_t)(param_1 + 0x2c));
      }
      uVar2 = rd32((uint32_t)(param_2 + 0x10));
      uVar6 = uVar7 - uVar1;
      if (uVar2 < uVar7 - uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 != 0) && (param_3 == -5)) {
        param_3 = 0;
      }
      wr32((uint32_t)(param_2 + 0x14), (int32_t)rd32((uint32_t)(param_2 + 0x14)) + uVar6);
      wr32((uint32_t)(param_2 + 0x10), uVar2 - uVar6);
      if (rd32((uint32_t)(param_1 + 0x38)) != (CowU32)0x0) {
        uVar5 = cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x38u))), COW_IMG(COW_ADDR_LIFT_102C98B2), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x3c)), uVar1, uVar6 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x3c), uVar5);
        wr32((uint32_t)(param_2 + 0x30), uVar5);
      }
      cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102C98C8), 3u, (const CowU32[]){ local_8, uVar1, uVar6 }, g->ecx, g->edx, g->eax, 0u);
      local_8 = local_8 + uVar6;
      iVar3 = uVar1 + uVar6;
      if (uVar1 + uVar6 == (int32_t)rd32((uint32_t)(param_1 + 0x2c))) {
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 0x28));
        if ((int32_t)rd32((uint32_t)(param_1 + 0x34)) == (int32_t)rd32((uint32_t)(param_1 + 0x2c))) {
          wr32((uint32_t)(param_1 + 0x34), iVar3);
        }
        uVar1 = rd32((uint32_t)(param_2 + 0x10));
        uVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x34)) - iVar3;
        if (uVar1 < uVar7) {
          uVar7 = uVar1;
        }
        if ((uVar7 != 0) && (param_3 == -5)) {
          param_3 = 0;
        }
        wr32((uint32_t)(param_2 + 0x14), (int32_t)rd32((uint32_t)(param_2 + 0x14)) + uVar7);
        wr32((uint32_t)(param_2 + 0x10), uVar1 - uVar7);
        if (rd32((uint32_t)(param_1 + 0x38)) != (CowU32)0x0) {
          uVar5 = cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x38u))), COW_IMG(COW_ADDR_LIFT_102C9919), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x3c)), iVar3, uVar7 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x3c), uVar5);
          wr32((uint32_t)(param_2 + 0x30), uVar5);
        }
        cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102C992F), 3u, (const CowU32[]){ local_8, iVar3, uVar7 }, g->ecx, g->edx, g->eax, 0u);
        local_8 = local_8 + uVar7;
        iVar3 = iVar3 + uVar7;
      }
      param_2 = iVar3;
      wr32((uint32_t)(iVar4 + 0xc), local_8);
      wr32((uint32_t)(param_1 + 0x30), param_2);
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c9860(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c9860: push ebp */
    g->ebp = g->esp;                       /* 0x102c9861: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c9863: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c9864: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c9865: push esi */
    g->esi = param_2;   /* 0x102c9866: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c9869: push edi */
    g->edi = param_3;   /* 0x102c986a: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102c986d: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x34u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102c9870: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0xCu); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c9873: register eax, replayed as the entry ran it */
    cow_lift_102c9860(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
