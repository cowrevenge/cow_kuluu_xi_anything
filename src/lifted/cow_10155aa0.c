/* f_0x10155aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10155aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10155aa0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, int32_t param_8, int32_t param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    iVar2 = 0;
      cow_bridge_1018d3d0(g, COW_IMG(COW_ADDR_LIFT_10155AB1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (param_2 != 0) {
        cow_bridge_1018d4a0(g, COW_IMG(COW_ADDR_LIFT_10155AC6), 2u, (const CowU32[]){ param_1, param_2 }, param_5, g->edx, g->eax, 0u);
        iVar2 = param_2 + 1;
        uVar1 = cow_bridge_10258170(g, COW_IMG(COW_ADDR_LIFT_10155AEC), 5u, (const CowU32[]){ param_6, param_7, 0, param_9, (CowU32)(param_8 == 4) }, g->ecx, g->edx, g->eax, 20u);
        cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155AF7), 1u, (const CowU32[]){ uVar1 }, g->esi, g->edx, g->eax, 0u);
      }
      if ((int8_t)rd8((uint32_t)(param_3 + param_1)) == '~') {
        cow_bridge_1018d580(g, COW_IMG(COW_ADDR_LIFT_10155B16), 2u, (const CowU32[]){ iVar2 + param_1, param_3 - iVar2 }, param_5, g->edx, g->eax, 0u);
        if (((param_4 == 0) || (param_9 != 1)) || ((int8_t)rd8((uint32_t)(param_3 + -1 + param_1)) != 'e')) {
          uVar1 = 0;
        }
        else {
          cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155B3C), 1u, (const CowU32[]){ 271906740u }, g->ecx, g->edx, g->eax, 0u);
          uVar1 = 1;
        }
        uVar1 = cow_bridge_10258060(g, COW_IMG(COW_ADDR_LIFT_10155B53), 3u, (const CowU32[]){ param_7, uVar1, param_8 }, g->ecx, g->edx, g->eax, 12u);
        cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155B5E), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155B6E), 1u, (const CowU32[]){ param_3 + 1 + param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155B7B), 1u, (const CowU32[]){ iVar2 + param_1 }, g->ecx, g->edx, g->eax, 0u);
      if (((param_4 == 0) || (param_9 != 1)) || ((int8_t)rd8((uint32_t)(param_3 + -1 + param_1)) != 'e')) {
        uVar1 = 0;
      }
      else {
        cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155BA1), 1u, (const CowU32[]){ 271906740u }, g->ecx, g->edx, g->eax, 0u);
        uVar1 = 1;
      }
      uVar1 = cow_bridge_10258060(g, COW_IMG(COW_ADDR_LIFT_10155BB8), 3u, (const CowU32[]){ param_7, uVar1, param_8 }, g->ecx, g->edx, g->eax, 12u);
      cow_bridge_1018d440(g, COW_IMG(COW_ADDR_LIFT_10155BC3), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 9 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10155aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10155aa0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10155aa1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10155aa2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10155aa3: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10155aa7: push edi */
    g->ecx = g->esi;   /* 0x10155aa8: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x10155aaa: the value the entry loaded and the decompiler dropped */
    cow_lift_10155aa0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 8 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
