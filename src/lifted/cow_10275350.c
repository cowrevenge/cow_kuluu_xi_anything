/* f_0x10275350 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10275350 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10275350(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    int local_8c;
    int local_88;
    int local_84;
    CowU8 local_80[128];
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8));
      iVar3 = 0;
      iVar4 = 0;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      if (param_1 == 0) {
        uVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF4C) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)) * 0x18)));
      }
      else {
        uVar5 = param_1 - 0x10;
      }
      if (uVar5 < (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF50) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)) * 0x18)))) {
        do {
          iVar2 = cow_bridge_10275310(g, COW_IMG(COW_ADDR_LIFT_1027539C), 1u, (const CowU32[]){ uVar5 + 0x10 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 4u);
          if (iVar2 == 0) {
            local_8c = local_8c + (int32_t)rd32((uint32_t)(uVar5 + 4));
            local_88 = local_88 + 1;
          }
          else if (iVar2 != 3) {
            iVar4 = iVar4 + (int32_t)rd32((uint32_t)(uVar5 + 4));
            local_84 = local_84 + 1;
          }
          iVar3 = iVar3 + 0x10;
          cow_bridge_102756c0(g, COW_IMG(COW_ADDR_LIFT_102753DE), 3u, (const CowU32[]){ g->ecx, local_80, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102753ED), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10361DC0), local_80 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
          uVar5 = cow_bridge_10275340(g, COW_IMG(COW_ADDR_LIFT_102753F3), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
        } while (uVar5 < (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF50) + 4u * (uint32_t)(iVar1 * 0x18))));
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275413), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B292C), local_8c, local_88 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275423), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B2908), iVar4, local_84 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275435), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B28E4), iVar3, local_84 + local_88 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1027543F), 1u, (const CowU32[]){ 272312500u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275453), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B2890), iVar3 + iVar4 + local_8c, local_84 + local_88 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 52u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 140 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10275350(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x8cu;                      /* 0x10275350: 140 bytes of locals */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8));   /* 0x10275356: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1027535b: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1027535c: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1027535d: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x9Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1027535e: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10275365: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10275366: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x10275369: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint32_t a = g->edi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->edi = (uint32_t)(r); } }; }   /* 0x1027536b: register edi, replayed as the entry ran it */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CEF8) + RD); uint32_t r = (uint32_t)(a + b); g->edi = (uint32_t)(r); }   /* 0x1027536e: register edi, replayed as the entry ran it */
    g->ebp = 0u;   /* 0x10275374: the value the entry loaded and the decompiler dropped */
    cow_lift_10275350(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
