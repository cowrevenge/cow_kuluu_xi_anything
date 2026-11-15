/* f_0x10275470 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10275470 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10275470(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    int local_4;
    iVar3 = 0;
      iVar6 = 0;
      iVar5 = 0;
      uVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF4C) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)) * 0x18)));
      iVar4 = 0;
      local_4 = 0;
      if (uVar2 < (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF50) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)) * 0x18)))) {
        do {
          iVar1 = cow_bridge_10275310(g, COW_IMG(COW_ADDR_LIFT_102754A4), 1u, (const CowU32[]){ uVar2 + 0x10 }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == 0) {
            iVar6 = iVar6 + (int32_t)rd32((uint32_t)(g->ecx + 4));
            local_4 = local_4 + 1;
          }
          else if (iVar1 != 3) {
            iVar5 = iVar5 + (int32_t)rd32((uint32_t)(g->ecx + 4));
            iVar3 = iVar3 + 1;
          }
          iVar4 = iVar4 + 0x10;
          uVar7 = cow_bridge_10275340(g, COW_IMG(COW_ADDR_LIFT_102754CF), 1u, (const CowU32[]){ g->ecx }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = (CowU32)uVar7;
        } while (uVar2 < (CowU32)((uint64_t)uVar7 >> 0x20));
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102754E8), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B292C), iVar6, local_4 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102754F4), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B2908), iVar5, iVar3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275506), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B28E4), iVar4, iVar3 + local_4 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275510), 1u, (const CowU32[]){ 272312500u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275520), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B2890), iVar4 + iVar5 + iVar6, iVar3 + local_4 }, g->ecx, g->edx, g->eax, 52u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10275470(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10275470: push ecx */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8));   /* 0x10275471: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10275476: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10275477: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10275478: push esi */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10275479: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1027547c: push edi */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x1027547d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CEF8) + RD); uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10275480: register eax, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x10275485: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x10275487: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x10275489: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x54u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1027548b: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x58u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1027548e: register edx, replayed as the entry ran it */
    g->ebp = 0u;   /* 0x10275491: the value the entry loaded and the decompiler dropped */
    cow_lift_10275470(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
