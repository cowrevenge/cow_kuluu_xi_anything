/* f_0x10127990 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10127990 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10127990(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 pcVar7;
    CowU32 pcVar8;
    CowU8 local_800[2047];
    CowU8 local_1;
    cVar2 = rd8((uint32_t)param_2);
      if (cVar2 != '\x05') {
        if (cVar2 == '\f') {
          iVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_101279C3), 1u, (const CowU32[]){ 71u }, g->ecx, g->edx, g->eax, 4u);
          g->eax = (CowU32)(-(CowU32)(iVar3 != 0) & 0x30703430); return;
        }
        if (cVar2 != '\r') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
      }
      cow_bridge_10127930(g, COW_IMG(COW_ADDR_LIFT_101279F1), 3u, (const CowU32[]){ local_800, param_1, 0x800 }, g->ecx, g->edx, g->eax, 0u);
      local_1 = 0;
      cow_bridge_10127970(g, COW_IMG(COW_ADDR_LIFT_10127A03), 1u, (const CowU32[]){ local_800 }, g->ecx, g->edx, g->eax, 0u);
      iVar3 = cow_bridge_101278b0(g, COW_IMG(COW_ADDR_LIFT_10127A0F), 2u, (const CowU32[]){ local_800, 0x3c }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 != 0) {
        while( 1 ) {
          iVar4 = cow_bridge_101278b0(g, COW_IMG(COW_ADDR_LIFT_10127A27), 2u, (const CowU32[]){ iVar3 + 1, 0x3e }, g->ecx, g->edx, g->eax, 8u);
          if (iVar4 == 0) break;
          if (((rd8((uint32_t)(iVar4 + 1)) != '\"') || (rd8((uint32_t)(iVar3 + -1)) != '\"')) &&
             (iVar4 = 0, rd32(COW_IMG(COW_ADDR_LIFT_1036EBB0)) != 0)) {
            pcVar7 = COW_IMG(COW_ADDR_LIFT_1036EBA0);
            do {
              uVar6 = 0xffffffff;
              pcVar8 = pcVar7;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar2 = rd8((uint32_t)pcVar8);
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              iVar5 = cow_bridge_101278d0(g, COW_IMG(COW_ADDR_LIFT_10127A5E), 3u, (const CowU32[]){ pcVar7, iVar3, ~uVar6 - 1 }, g->ecx, g->edx, 0u, 12u);
              if (iVar5 == 0) {
                g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036EBB0) + 4u * (uint32_t)(iVar4 * 5)))); return;
              }
              piVar1 = (CowU32)(pcVar7 + 0x24);
              pcVar7 = pcVar7 + 0x14;
              iVar4 = iVar4 + 1;
            } while (rd32((uint32_t)piVar1) != 0);
          }
          iVar3 = cow_bridge_10315210(g, COW_IMG(COW_ADDR_LIFT_10127A7C), 2u, (const CowU32[]){ iVar3 + 1, 0x3c }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 == 0) {
            g->eax = (CowU32)(0); return;
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10127990(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_2;   /* 0x10127990: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x804u;                      /* 0x10127994: 2052 bytes of locals */
    g->eax = 0u;   /* 0x1012799a: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1012799c: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1012799e: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1012799f: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101279a0: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x5u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x101279a1: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101279a4: push edi */
    cow_lift_10127990(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
