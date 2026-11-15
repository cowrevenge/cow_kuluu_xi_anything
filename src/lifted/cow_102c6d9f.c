/* f_0x102c6d9f - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c6d9f (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c6d9f(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    wr32((uint32_t)(param_1 + 0x78), 0);
      cow_bridge_102beba8(g, COW_IMG(COW_ADDR_LIFT_102C6DB1), 1u, (const CowU32[]){ g->esi }, param_1, g->edx, g->eax, 0u);
      uVar2 = rd32((uint32_t)(param_1 + 0xcc));
      if ((int8_t)rd8((uint32_t)(param_1 + 0x123)) == '\0') {
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 200));
        wr32((uint32_t)(param_1 + 0xd0), uVar2);
        wr32((uint32_t)(param_1 + 0xe0), iVar4);
        wr32((uint32_t)(param_1 + 0xdc), (int32_t)rd32((uint32_t)(param_1 + 0xd8)) + 1);
      }
      else {
        if ((rd8((uint32_t)(param_1 + 0x70)) & 2) == 0) {
          uVar2 = ((uVar2 - rd32(COW_IMG(COW_ADDR_LIFT_10342EE4))) + -1 + rd32(COW_IMG(COW_ADDR_LIFT_10342F00))) / rd32(COW_IMG(COW_ADDR_LIFT_10342F00));
        }
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 200));
        wr32((uint32_t)(param_1 + 0xd0), uVar2);
        iVar3 = (CowU32)rd8((uint32_t)(param_1 + 0x124)) * 4;
        uVar2 = ((iVar4 - (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10342EAC) + iVar3))) + -1 + rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10342EC8) + iVar3))) /
                rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10342EC8) + iVar3));
        wr32((uint32_t)(param_1 + 0xe0), uVar2);
        wr32((uint32_t)(param_1 + 0xdc), (rd8((uint32_t)(param_1 + 0x129)) * uVar2 + 7 >> 3) + 1);
      }
      uVar2 = (CowU32)rd8((uint32_t)(param_1 + 0x129));
      uVar6 = rd32((uint32_t)(param_1 + 0x70));
      if (((uVar6 & 4) != 0) && (rd8((uint32_t)(param_1 + 0x127)) < 8)) {
        uVar2 = 8;
      }
      if ((uVar6 & 0x1000) != 0) {
        cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x126));
        if (cVar1 == '\x03') {
          uVar2 = (CowU32)((int16_t)rd16((uint32_t)(param_1 + 0x11a)) != 0) * 8 + 0x18;
        }
        else if (cVar1 == '\0') {
          if (uVar2 < 8) {
            uVar2 = 8;
          }
          if ((int16_t)rd16((uint32_t)(param_1 + 0x11a)) != 0) {
            uVar2 = uVar2 * 2;
          }
        }
        else if ((cVar1 == '\x02') && ((int16_t)rd16((uint32_t)(param_1 + 0x11a)) != 0)) {
          uVar2 = (uVar2 << 2) / 3;
        }
      }
      if ((uVar6 & 0x8000) != 0) {
        cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x126));
        if (cVar1 == '\x03') {
          uVar2 = 0x20;
        }
        else if (cVar1 == '\0') {
          uVar2 = ((8 < uVar2) - 1 & 0xfffffff0) + 0x20;
        }
        else if (cVar1 == '\x02') {
          uVar2 = ((0x20 < uVar2) - 1 & 0xffffffe0) + 0x40;
        }
      }
      if ((uVar6 & 0x4000) != 0) {
        if (((((int16_t)rd16((uint32_t)(param_1 + 0x11a)) == 0) || ((uVar6 & 0x1000) == 0)) && ((uVar6 & 0x8000) == 0))
           && (cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x126)), cVar1 != '\x04')) {
          if ((int)uVar2 < 9) {
            uVar2 = (CowU32)(cVar1 == '\x06') * 8 + 0x18;
          }
          else {
            uVar2 = ((cVar1 != '\x06') - 1 & 0x10) + 0x30;
          }
        }
        else {
          uVar2 = ((0x10 < (int)uVar2) - 1 & 0xffffffe0) + 0x40;
        }
      }
      if ((uVar6 & 0x100000) != 0) {
        uVar6 = (CowU32)rd8((uint32_t)(param_1 + 0x65)) * (CowU32)rd8((uint32_t)(param_1 + 100));
        if ((int)uVar2 < (int)uVar6) {
          uVar2 = uVar6;
        }
      }
      iVar4 = cow_bridge_102c43fc(g, COW_IMG(COW_ADDR_LIFT_102C6F9D), 2u, (const CowU32[]){ param_1, ((iVar4 + 7U & 0xfffffff8) * uVar2 + 7 >> 3) +
                                   ((int)(uVar2 + 7) >> 3) + 0x41 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x250), iVar4);
      wr32((uint32_t)(param_1 + 0xec), iVar4 + 0x20);
      uVar5 = cow_bridge_102c43fc(g, COW_IMG(COW_ADDR_LIFT_102C6FBC), 2u, (const CowU32[]){ param_1, (int32_t)rd32((uint32_t)(param_1 + 0xd8)) + 1 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0xe8), uVar5);
      cow_bridge_102c44f9(g, COW_IMG(COW_ADDR_LIFT_102C6FCF), 4u, (const CowU32[]){ param_1, uVar5, 0, (int32_t)rd32((uint32_t)(param_1 + 0xd8)) + 1 }, g->ecx, g->edx, g->eax, 32u);
      wr32((uint32_t)(param_1 + 0x6c), rd32((uint32_t)(param_1 + 0x6c)) | 0x40);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c6d9f(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c6d9f: push ebp */
    g->ebp = g->esp;                       /* 0x102c6da0: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c6da2: push esi */
    g->esi = param_2;   /* 0x102c6da3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c6da6: push edi */
    cow_lift_102c6d9f(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
