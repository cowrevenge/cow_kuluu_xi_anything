/* f_0x101f41d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f41d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f41d0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 this_00;
    int iVar4;
    this_00 = rd32(COW_IMG(COW_ADDR_LIFT_10666E6C));
      if (param_3 != 9) {
        this_00 = rd32(COW_IMG(COW_ADDR_LIFT_10666E30));
      }
      iVar4 = 0;
      uVar3 = (CowU32)rd8((uint32_t)((int32_t)rd32((uint32_t)((int)this_00 + 0xc)) + 0x18 + (int)this_00));
      if (uVar3 != 0) {
        do {
          puVar1 = (CowU32)cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_101F4205), 1u, (const CowU32[]){ iVar4 }, this_00, g->edx, g->eax, 0u);
          if ((puVar1 != (CowU32)0x0) && (iVar2 = cow_bridge_1015bc40(g, COW_IMG(COW_ADDR_LIFT_101F421C), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)puVar1) }, g->ecx, g->edx, g->eax, 0u), iVar2 != 0)) {
            wr8((uint32_t)(iVar2 + 0x1b3), (int8_t)rd8((uint32_t)(iVar2 + 0x1b3)) + '\x01');
            if ((int16_t)rd16((uint32_t)(iVar2 + 4)) == 0xc) {
              if ((rd8((uint32_t)((int)puVar1 + 0x11)) & 0x40) != 0) {
                wr32((uint32_t)((int)param_1 + 8), (int32_t)rd32((uint32_t)((int)param_1 + 8)) + 1);
              }
            }
            else if (((int16_t)rd16((uint32_t)(iVar2 + 4)) == 0xe) && ((rd8((uint32_t)((int)puVar1 + 0x11)) & 0x40) != 0)) {
              wr32((uint32_t)((int)param_1 + 0xc), (int32_t)rd32((uint32_t)((int)param_1 + 0xc)) + 1);
            }
            wr8((uint32_t)(iVar2 + 0x1b3), (int8_t)rd8((uint32_t)(iVar2 + 0x1b3)) + -1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, edi, ebp, ebx, ecx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f41d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101f41d0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->eax = (uint32_t)(rd32(A)); }   /* 0x101f41d1: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101f41d5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101f41d6: push ebp */
    g->ebp = rd32(COW_IMG(COW_ADDR_LIFT_10666E6C));   /* 0x101f41d7: the value the entry loaded and the decompiler dropped */
    cow_lift_101f41d0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
