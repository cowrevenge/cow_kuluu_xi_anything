/* f_0x102bf6a6 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bf6a6 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bf6a6(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU8 local_38[52];
    if ((int32_t)rd32((uint32_t)(param_1 + 0xec)) == 0) {
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_102BF6D7), 4u, (const CowU32[]){ local_38, COW_IMG(COW_ADDR_LIFT_103C8054), rd32((uint32_t)(param_1 + 0xe4)), rd8((uint32_t)(param_1 + 0x124)) }, param_1, g->edx, g->eax, 0u);
        cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102BF6E1), 2u, (const CowU32[]){ param_1, local_38 }, g->ecx, g->edx, g->eax, 24u);
      }
      if ((rd8((uint32_t)(param_1 + 0x71)) & 0x10) != 0) {
        if ((int8_t)rd8((uint32_t)(param_1 + 0x108)) == '\x03') {
          cow_bridge_102c1a72(g, COW_IMG(COW_ADDR_LIFT_102BF71B), 5u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, rd32((uint32_t)(param_1 + 0x114)), rd32((uint32_t)(param_1 + 0x188)), (CowU32)rd16((uint32_t)(param_1 + 0x11a)) }, g->ecx, g->edx, g->eax, 20u);
        }
        else {
          if ((int16_t)rd16((uint32_t)(param_1 + 0x11a)) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = param_1 + 0x18c;
          }
          cow_bridge_102c1c79(g, COW_IMG(COW_ADDR_LIFT_102BF747), 3u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, iVar2 }, g->ecx, g->edx, g->eax, 12u);
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 4) != 0) {
        cow_bridge_102c32b3(g, COW_IMG(COW_ADDR_LIFT_102BF769), 3u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, 0x80 }, g->ecx, g->edx, g->eax, 12u);
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 0x60) != 0) {
        iVar2 = cow_bridge_102c0272(g, COW_IMG(COW_ADDR_LIFT_102BF787), 3u, (const CowU32[]){ param_1, param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 12u);
        if (iVar2 != 0) {
          wr8((uint32_t)(param_1 + 0x228), 1);
          if ((int32_t)rd32((uint32_t)(param_1 + 0x70)) == 0x400000) {
            cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102BF7AA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C802C) }, g->ecx, g->edx, g->eax, 0u);
          }
          if ((int32_t)rd32((uint32_t)(param_1 + 0x70)) == 0x200000) {
            cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102BF7BC), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C802C) }, g->ecx, g->edx, g->eax, 0u);
          }
        }
      }
      if (((rd32((uint32_t)(param_1 + 0x70)) & 0x4000) != 0) && ((rd32((uint32_t)(param_1 + 0x68)) & 0x800) == 0)) {
        cow_bridge_102c0140(g, COW_IMG(COW_ADDR_LIFT_102BF7E7), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((rd8((uint32_t)(param_1 + 0x70)) & 0x80) != 0) &&
         (((int16_t)rd16((uint32_t)(param_1 + 0x11a)) != 0 || ((rd8((uint32_t)(param_1 + 0x126)) & 4) != 0)))) {
        cow_bridge_102c0875(g, COW_IMG(COW_ADDR_LIFT_102BF855), 12u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, param_1 + 0x18c, param_1 + 0x138, param_1 + 0x142, rd32((uint32_t)(param_1 + 0x164)), rd32((uint32_t)(param_1 + 0x168)), rd32((uint32_t)(param_1 + 0x16c)), rd32((uint32_t)(param_1 + 0x170)), rd32((uint32_t)(param_1 + 0x174)), rd32((uint32_t)(param_1 + 0x178)), rd32((uint32_t)(param_1 + 0x158)) }, g->ecx, g->edx, g->eax, 48u);
      }
      if (((rd32((uint32_t)(param_1 + 0x70)) & 0x2000) != 0) &&
         (((-1 < (char)rd32((uint32_t)(param_1 + 0x70)) ||
           (((int16_t)rd16((uint32_t)(param_1 + 0x11a)) == 0 && ((rd8((uint32_t)(param_1 + 0x126)) & 4) == 0)))) &&
          ((int8_t)rd8((uint32_t)(param_1 + 0x126)) != '\x03')))) {
        cow_bridge_102c1700(g, COW_IMG(COW_ADDR_LIFT_102BF8A6), 5u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, rd32((uint32_t)(param_1 + 0x164)), rd32((uint32_t)(param_1 + 0x170)), rd32((uint32_t)(param_1 + 0x158)) }, g->ecx, g->edx, g->eax, 20u);
      }
      if ((rd8((uint32_t)(param_1 + 0x71)) & 4) != 0) {
        cow_bridge_102bfd29(g, COW_IMG(COW_ADDR_LIFT_102BF8C3), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 0x40) != 0) {
        cow_bridge_102c1fcc(g, COW_IMG(COW_ADDR_LIFT_102BF8EB), 4u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, rd32((uint32_t)(param_1 + 0x1ec)), rd32((uint32_t)(param_1 + 0x1f0)) }, g->ecx, g->edx, g->eax, 16u);
        if ((int32_t)rd32((uint32_t)(param_1 + 0x104)) == 0) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102BF902), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C8008) }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 0x20) != 0) {
        cow_bridge_102c31ca(g, COW_IMG(COW_ADDR_LIFT_102BF91E), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 8) != 0) {
        cow_bridge_102bfbae(g, COW_IMG(COW_ADDR_LIFT_102BF941), 3u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, param_1 + 0x181 }, g->ecx, g->edx, g->eax, 12u);
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 4) != 0) {
        cow_bridge_102bfa9f(g, COW_IMG(COW_ADDR_LIFT_102BF95E), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 1) != 0) {
        cow_bridge_102c3440(g, COW_IMG(COW_ADDR_LIFT_102BF97A), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 1) != 0) {
        cow_bridge_102c3266(g, COW_IMG(COW_ADDR_LIFT_102BF996), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((rd32((uint32_t)(param_1 + 0x70)) & 0x4000) != 0) && ((rd32((uint32_t)(param_1 + 0x68)) & 0x800) != 0)) {
        cow_bridge_102c0140(g, COW_IMG(COW_ADDR_LIFT_102BF9B6), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x71)) & 0x80) != 0) {
        cow_bridge_102bff09(g, COW_IMG(COW_ADDR_LIFT_102BF9DE), 4u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1, (CowU32)rd16((uint32_t)(param_1 + 0x12e)), rd32((uint32_t)(param_1 + 0x6c)) }, g->ecx, g->edx, g->eax, 16u);
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 8) != 0) {
        cow_bridge_102bfe5f(g, COW_IMG(COW_ADDR_LIFT_102BF9FB), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 2) != 0) {
        cow_bridge_102bfd6d(g, COW_IMG(COW_ADDR_LIFT_102BFA17), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x70)) & 0x10) != 0) {
        cow_bridge_102c3239(g, COW_IMG(COW_ADDR_LIFT_102BFA33), 2u, (const CowU32[]){ param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x72)) & 0x10) != 0) {
        if (rd32((uint32_t)(param_1 + 0x58)) != (CowU32)0x0) {
          cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x58u))), COW_IMG(COW_ADDR_LIFT_102BFA54), 3u, (const CowU32[]){ param_1, param_1 + 0x100, (int32_t)rd32((uint32_t)(param_1 + 0xec)) + 1 }, g->ecx, g->edx, g->eax, 12u);
        }
        if ((int8_t)rd8((uint32_t)(param_1 + 100)) != '\0') {
          wr8((uint32_t)(param_1 + 0x109), (int8_t)rd8((uint32_t)(param_1 + 100)));
        }
        if ((int8_t)rd8((uint32_t)(param_1 + 0x65)) != '\0') {
          wr8((uint32_t)(param_1 + 0x10a), (int8_t)rd8((uint32_t)(param_1 + 0x65)));
        }
        bVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x10a)) * (int8_t)rd8((uint32_t)(param_1 + 0x109));
        wr8((uint32_t)(param_1 + 0x10b), bVar1);
        wr32((uint32_t)(param_1 + 0x104), (int32_t)rd32((uint32_t)(param_1 + 0x100)) * (CowU32)bVar1 + 7 >> 3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bf6a6(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bf6a6: push ebp */
    g->ebp = g->esp;                       /* 0x102bf6a7: mov ebp, esp */
    g->esp -= 0x34u;                      /* 0x102bf6a9: 52 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bf6ac: push esi */
    g->esi = param_2;   /* 0x102bf6ad: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102bf6b0: push edi */
    g->edi = 0u;   /* 0x102bf6b1: the value the entry loaded and the decompiler dropped */
    cow_lift_102bf6a6(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
