/* f_0x102f806c - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f806c (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f806c(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU8 local_20[4];
    CowU8 local_1c[4];
    CowU8 local_18;
    CowU8 local_17;
    CowU8 local_16;
    CowU8 local_15;
    CowU8 local_14;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x58)) != 0) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F8089), 2u, (const CowU32[]){ g->esi, 271878860u }, param_1, g->edx, g->eax, 0u);
      }
      if (param_3 != 0xd) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F809C), 2u, (const CowU32[]){ param_1, "Invalid IHDR chunk" }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x58), rd32((uint32_t)(param_1 + 0x58)) | 1);
      cow_bridge_102f7710(g, COW_IMG(COW_ADDR_LIFT_102F80AE), 3u, (const CowU32[]){ param_1, local_20, 0xd }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102f7fe0(g, COW_IMG(COW_ADDR_LIFT_102F80B6), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
      uVar2 = cow_bridge_102f76da(g, COW_IMG(COW_ADDR_LIFT_102F80BF), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_102f76da(g, COW_IMG(COW_ADDR_LIFT_102F80CA), 1u, (const CowU32[]){ local_1c }, g->ecx, g->edx, g->eax, 0u);
      local_10 = (CowU32)local_16;
      local_c = (CowU32)local_15;
      local_8 = (CowU32)local_14;
      if ((((uVar2 == 0) || (0x7fffffff < uVar2)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F8113), 2u, (const CowU32[]){ param_1, "Invalid image size in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((local_18 != 1) && (local_18 != 2)) &&
         ((local_18 != 4 && ((local_18 != 8 && (local_18 != 0x10)))))) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F8139), 2u, (const CowU32[]){ param_1, "Invalid bit depth in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((local_17 == 1) || (local_17 == 5)) || (6 < local_17)) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F815C), 2u, (const CowU32[]){ param_1, "Invalid color type in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((local_17 == 3) && (8 < local_18)) ||
         (((local_17 == 2 || ((local_17 == 4 || (local_17 == 6)))) && (local_18 < 8)))) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F818A), 2u, (const CowU32[]){ param_1, "Invalid color type/bit depth combination in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (1 < (int)local_8) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F819D), 2u, (const CowU32[]){ param_1, "Unknown interlace method in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (local_10 != 0) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F81B0), 2u, (const CowU32[]){ param_1, "Unknown compression method in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      if (local_c != 0) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F81C3), 2u, (const CowU32[]){ param_1, "Unknown filter method in IHDR" }, g->ecx, g->edx, g->eax, 0u);
      }
      wr8((uint32_t)(param_1 + 0x113), (CowU8)local_8);
      wr32((uint32_t)(param_1 + 0xb8), uVar2);
      wr32((uint32_t)(param_1 + 0xbc), uVar3);
      wr8((uint32_t)(param_1 + 0x117), local_18);
      wr8((uint32_t)(param_1 + 0x116), local_17);
      if (local_17 != 0) {
        if (local_17 == 2) {
          wr8((uint32_t)(param_1 + 0x11a), 3);
          goto L_102f8224;
        }
        if (local_17 != 3) {
          if (local_17 == 4) {
            wr8((uint32_t)(param_1 + 0x11a), 2);
          }
          else if (local_17 == 6) {
            wr8((uint32_t)(param_1 + 0x11a), 4);
          }
          goto L_102f8224;
        }
      }
      wr8((uint32_t)(param_1 + 0x11a), 1);
    L_102f8224:
      bVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x11a)) * local_18;
      wr8((uint32_t)(param_1 + 0x119), bVar1);
      wr32((uint32_t)(param_1 + 200), bVar1 * uVar2 + 7 >> 3);
      cow_bridge_102f1e1c(g, COW_IMG(COW_ADDR_LIFT_102F825A), 9u, (const CowU32[]){ param_1, param_2, uVar2, uVar3, local_18, local_17, local_8, local_10, local_c }, g->ecx, g->edx, g->eax, 36u);
      return;
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
void cow_adapter_102f806c(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f806c: push ebp */
    g->ebp = g->esp;                       /* 0x102f806d: mov ebp, esp */
    g->esp -= 0x1cu;                      /* 0x102f806f: 28 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f8072: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f8073: push esi */
    g->esi = param_2;   /* 0x102f8074: the value the entry loaded and the decompiler dropped */
    cow_lift_102f806c(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
