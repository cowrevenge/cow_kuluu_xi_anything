/* f_0x1014a700 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014a700 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014a700(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    char cVar1;
    int iVar2;
    CowU16 extraout_var;
    CowU16 extraout_var_00;
    CowU16 uVar3;
    int local_4;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10578428)) != (CowU32)0x0) {
        local_4 = 0;
        wr16((uint32_t)((int)param_1 + 0x56), 0);
        do {
          iVar2 = cow_bridge_101612a0(g, COW_IMG(COW_ADDR_LIFT_1014A729), 1u, (const CowU32[]){ local_4 }, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u);
          uVar3 = extraout_var;
          if (iVar2 != 0) {
            if (rd8((uint32_t)(iVar2 + 2)) != 0) {
              this_00 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x50)) + (CowU32)rd16((uint32_t)((int)param_1 + 0x56)) * 0x54
                                );
              cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1014A75C), 2u, (const CowU32[]){ 0x12, (CowU32)rd8((uint32_t)(iVar2 + 2)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u);
              cVar1 = cow_bridge_1014a550(g, COW_IMG(COW_ADDR_LIFT_1014A76A), 1u, (const CowU32[]){ (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(iVar2 + 2))) & 0xffu)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u)
              ;
              cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_1014A78A), 4u, (const CowU32[]){ 1, 0x35, (CowU32)rd8((uint32_t)(iVar2 + 2)), (-(CowU32)(cVar1 != '\0') & 0x404040) + 0x80404040 }, this_00, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u);
              wr32((uint32_t)((int)this_00 + 0x48), (CowU32)rd8((uint32_t)(iVar2 + 2)));
              wr16((uint32_t)((int)param_1 + 0x56), (int16_t)rd16((uint32_t)((int)param_1 + 0x56)) + 1);
              uVar3 = extraout_var_00;
            }
          }
          local_4 = local_4 + 1;
        } while (local_4 < 0x20);
        cow_bridge_101f7020(g, COW_IMG(COW_ADDR_LIFT_1014A7BA), 3u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x50)), (((uint32_t)(uVar3) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)param_1 + 0x56))) & 0xffffu)), 1 }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u);
        cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_1014A7C9), 2u, (const CowU32[]){ 0u, 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014a700(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1014a700: push ecx */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10578428));   /* 0x1014a701: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1014a706: push ebx */
    g->ebx = 0u;   /* 0x1014a707: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014a709: push esi */
    cow_lift_1014a700(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
