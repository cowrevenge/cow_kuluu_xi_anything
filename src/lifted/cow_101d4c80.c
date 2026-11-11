/* f_0x101d4c80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d4c80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d4c80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    char cVar3;
    CowU32 psVar4;
    CowU32 piVar5;
    CowU32 local_c;
    _Bool bVar6;
      _Bool bVar7;
      
      bVar6 = 0;
      if (rd32((uint32_t)(param_1 + 0x38)) != 0) {
        bVar6 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x38)) + 0xc0)) == '\x01';
      }
      local_c = (CowU32)(param_1 + 0x44);
      psVar4 = COW_IMG(COW_ADDR_LIFT_10338458);
      do {
        sVar1 = rd16((uint32_t)psVar4);
        if (sVar1 == 0) {
          return;
        }
        cVar3 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101D4CCB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar3 == '\0') {
          piVar5 = COW_IMG(COW_ADDR_LIFT_10480AF0);
          bVar7 = rd32((uint32_t)local_c) != 0;
        }
        else {
          bVar7 = 0;
          piVar5 = COW_IMG(COW_ADDR_LIFT_10480AF0);
        }
        do {
          iVar2 = rd32((uint32_t)piVar5);
          if ((((iVar2 != 0) && ((rd32((uint32_t)(iVar2 + 0x120)) >> 9 & 1) != 0)) &&
              ((rd32((uint32_t)(iVar2 + 0x78)) & 0xff000000) == 0x1000000)) &&
             (rd16((uint32_t)(iVar2 + 0xfc)) == sVar1)) {
            iVar2 = rd32((uint32_t)(iVar2 + 0xa0));
            if (iVar2 != 0) {
              if (bVar7) {
                cow_bridge_10085990(g, COW_IMG(COW_ADDR_LIFT_101D4D30), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              }
              else {
                cow_bridge_100859d0(g, COW_IMG(COW_ADDR_LIFT_101D4D39), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              }
            }
            if (bVar6) {
              wr8((uint32_t)(iVar2 + 0xc0), 1);
            }
            else {
              wr8((uint32_t)(iVar2 + 0xc0), 2);
            }
          }
          piVar5 = piVar5 + 1;
        } while ((int)piVar5 < 0x10482ef0);
        psVar4 = psVar4 + 0x42;
        local_c = local_c + 1;
      } while ((int)psVar4 < 0x103384dc);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 16 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d4c80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x10u;                      /* 0x101d4c80: 16 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x38u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101d4c83: register eax, replayed as the entry ran it */
    cow_lift_101d4c80(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
