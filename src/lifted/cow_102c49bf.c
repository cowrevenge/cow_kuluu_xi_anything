/* f_0x102c49bf - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c49bf (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c49bf(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 uVar3;
    CowU8 local_18[4];
    CowU8 local_14[4];
    char local_10;
    char local_f;
    CowU8 local_e;
    CowU8 local_d;
    CowU8 local_c;
    CowU32 local_8;
    if ((rd8((uint32_t)(param_1 + 0x68)) & 1) != 0) {
        cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C49DC), 2u, (const CowU32[]){ g->esi, 272402448u }, param_1, g->edx, g->eax, 0u);
      }
      if (param_3 != 0xd) {
        cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C49EF), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C87FC) }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x68), rd32((uint32_t)(param_1 + 0x68)) | 1);
      cow_bridge_102c4595(g, COW_IMG(COW_ADDR_LIFT_102C4A01), 3u, (const CowU32[]){ param_1, local_18, 0xd }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102c45b9(g, COW_IMG(COW_ADDR_LIFT_102C4A09), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = cow_bridge_102c453c(g, COW_IMG(COW_ADDR_LIFT_102C4A12), 1u, (const CowU32[]){ local_18 }, g->ecx, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_102c453c(g, COW_IMG(COW_ADDR_LIFT_102C4A20), 1u, (const CowU32[]){ local_14 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 200), iVar2);
      local_8 = (CowU32)local_c;
      wr8((uint32_t)(param_1 + 0x123), local_c);
      wr32((uint32_t)(param_1 + 0xcc), uVar3);
      wr8((uint32_t)(param_1 + 0x127), local_10);
      wr8((uint32_t)(param_1 + 0x126), local_f);
      wr8((uint32_t)(param_1 + 0x238), local_d);
      if (local_f != '\0') {
        if (local_f == '\x02') {
          wr8((uint32_t)(param_1 + 0x12a), 3);
          goto L_102c4a98;
        }
        if (local_f != '\x03') {
          if (local_f == '\x04') {
            wr8((uint32_t)(param_1 + 0x12a), 2);
          }
          else if (local_f == '\x06') {
            wr8((uint32_t)(param_1 + 0x12a), 4);
          }
          goto L_102c4a98;
        }
      }
      wr8((uint32_t)(param_1 + 0x12a), 1);
    L_102c4a98:
      bVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x12a)) * local_10;
      wr8((uint32_t)(param_1 + 0x129), bVar1);
      wr32((uint32_t)(param_1 + 0xd8), (CowU32)bVar1 * iVar2 + 7 >> 3);
      cow_bridge_102c80a9(g, COW_IMG(COW_ADDR_LIFT_102C4AD3), 9u, (const CowU32[]){ param_1, param_2, iVar2, uVar3, local_10, local_f, local_8, local_e, local_d }, g->ecx, g->edx, g->eax, 36u);
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
void cow_adapter_102c49bf(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c49bf: push ebp */
    g->ebp = g->esp;                       /* 0x102c49c0: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x102c49c2: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c49c5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c49c6: push esi */
    g->esi = param_2;   /* 0x102c49c7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c49ca: push edi */
    cow_lift_102c49bf(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
