/* f_0x101bb4b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101bb4b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101bb4b0(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    CowU32 this_00;
    int iVar3;
    CowU32 uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    CowU32 local_10;
    this_00 = (CowU32)cow_bridge_10153ff0(g, COW_IMG(COW_ADDR_LIFT_101BB4C0), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      iVar3 = cow_bridge_101549e0(g, COW_IMG(COW_ADDR_LIFT_101BB4CB), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar3) {
        do {
          if (param_3 <= iVar6) {
            return;
          }
          cVar1 = cow_bridge_1022aff0(g, COW_IMG(COW_ADDR_LIFT_101BB503), 1u, (const CowU32[]){ iVar7 }, g->ecx, g->edx, g->eax, 4u);
          if (cVar1 != '\0') {
            uVar4 = cow_bridge_101549f0(g, COW_IMG(COW_ADDR_LIFT_101BB514), 1u, (const CowU32[]){ iVar7 }, this_00, g->edx, g->eax, 0u);
            uVar2 = (CowU16)uVar4;
            if ((0x180 < uVar2) && (uVar2 < 0x184)) {
              return;
            }
            if (uVar2 == 0) {
              cVar5 = (char)param_4 + '\x01';
              cVar1 = -1;
              uVar4 = 0xff;
            }
            else {
              cVar1 = (char)((CowU32)uVar4 >> 8);
              if (cVar1 == '\0') {
                cVar1 = -1;
                cVar5 = (char)param_4 + '\x02';
              }
              else {
                cVar5 = (char)param_4;
                if ((char)uVar4 == '\0') {
                  cVar5 = (char)param_4 + '\x03';
                  uVar4 = 0xff;
                }
              }
            }
            local_10 = (((uint32_t)((((uint32_t)((char)uVar4) & 0xffu) << 8 | ((uint32_t)(cVar1) & 0xffu))) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(rd8((uint32_t)((int)param_1 + 4))) & 0xffu) << 8 | ((uint32_t)(cVar5) & 0xffu))) & 0xffffu));
            wr32((uint32_t)(iVar6 + param_2), local_10);
            uVar4 = cow_bridge_10154550(g, COW_IMG(COW_ADDR_LIFT_101BB56F), 1u, (const CowU32[]){ iVar7 }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(iVar6 + 4 + param_2), uVar4);
            iVar6 = iVar6 + 8;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 16 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101bb4b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x10u;                      /* 0x101bb4b0: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101bb4b3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101bb4b4: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101bb4b5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101bb4b6: push edi */
    cow_lift_101bb4b0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
