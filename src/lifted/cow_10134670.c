/* f_0x10134670 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10134670 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10134670(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 uVar2;
    char cVar3;
    CowU32 puVar4;
    CowU16 extraout_var;
    wr8((uint32_t)((int)param_1 + 0x14f), (char)param_2);
      wr32((uint32_t)((int)param_1 + 0x150), param_3);
      if ((char)param_2 != -1) {
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_101346A2), 4u, (const CowU32[]){ 0xffff, 2, 0x12, 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10666E34)), param_2, g->eax, 0u);
        iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_105781B4));
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781B4)) + 8), (CowU16)param_2 & 0xff);
        wr32((uint32_t)(iVar1 + 0xc), param_3);
        puVar4 = (CowU32)cow_bridge_100eb490(g, COW_IMG(COW_ADDR_LIFT_101346BB), 2u, (const CowU32[]){ g->edi, g->ebx }, g->ecx, g->edx, g->eax, 8u);
        wr8((uint32_t)(iVar1 + 6), 0);
        if (puVar4 != (CowU32)0x0) {
          uVar2 = cow_bridge_100fe990(g, COW_IMG(COW_ADDR_LIFT_101346D5), 3u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)puVar4)) & 0xffffu)), 0xe, puVar4 + 2u * (uint32_t)(8) }, g->ecx, g->edx, g->eax, 12u);
          wr8((uint32_t)(iVar1 + 6), uVar2);
        }
        cow_bridge_101f23a0(g, COW_IMG(COW_ADDR_LIFT_101346EC), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_105781B4)) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101346FF), 3u, (const CowU32[]){ 272038040u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      cVar3 = cow_bridge_1015ecc0(g, COW_IMG(COW_ADDR_LIFT_10134714), 1u, (const CowU32[]){ 131072u }, 274864184u, g->edx, g->eax, 0u);
      if (cVar3 == '\0') {
        cow_bridge_1013e3b0(g, COW_IMG(COW_ADDR_LIFT_1013473A), 4u, (const CowU32[]){ 0u, 1u, 0u, 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578204)), g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1013474D), 3u, (const CowU32[]){ 272038040u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_105781C4), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10134670(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10134670: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10134671: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10134675: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10134676: register edi, replayed as the entry ran it */
    cow_lift_10134670(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
