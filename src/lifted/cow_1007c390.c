/* f_0x1007c390 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007c390 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007c390(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    cVar1 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_1007C39E), 2u, (const CowU32[]){ 80u, 0u }, param_1, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(param_3); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) == 0) {
        g->eax = (CowU32)(-param_3); return;
      }
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) == 0) {
        g->eax = (CowU32)(-param_3); return;
      }
      cVar1 = cow_bridge_100882c0(g, COW_IMG(COW_ADDR_LIFT_1007C3DF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(param_3); return;
      }
      iVar4 = (int32_t)rd32((uint32_t)((int)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x170));
      cVar2 = cow_bridge_10095790(g, COW_IMG(COW_ADDR_LIFT_1007C401), 1u, (const CowU32[]){ iVar4 }, (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))), g->edx, g->eax, 0u);
      cVar1 = (int8_t)rd8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x1bc));
      if (cVar1 == '\x17') {
        g->eax = (CowU32)(param_3); return;
      }
      if ((iVar4 != 0) && (cVar2 == '\0')) {
        g->eax = (CowU32)(param_3); return;
      }
      iVar4 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4));
      iVar3 = cow_bridge_10079170(g, COW_IMG(COW_ADDR_LIFT_1007C43E), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      iVar5 = 0;
      if (iVar3 == 1) {
        if (cVar2 != '\0') {
          g->eax = (CowU32)(param_3); return;
        }
      }
      else {
        if (iVar3 == 2) {
          if (cVar2 == '\0') {
            g->eax = (CowU32)(param_3); return;
          }
        }
        else {
          if ((iVar4 != 0) && ((iVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1007C455), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u), iVar5 < 0 || (0x14 < iVar5)))) {
            iVar5 = 0;
          }
          if (cVar2 == '\0') goto L_1007c4a8;
        }
        if (cVar1 == '\x18') {
          wr8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x1bc), 0x19);
          goto L_1007c4b5;
        }
      }
    L_1007c4a8:
      if (((cVar1 == '\x19') || (cVar1 == '\x1a')) && (iVar3 != 2)) {
        g->eax = (CowU32)(param_3); return;
      }
    L_1007c4b5:
      iVar4 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_1007C4C3), 3u, (const CowU32[]){ 275u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
      if (iVar4 != 0) {
        wr32((uint32_t)(iVar4 + 4), iVar3);
        wr32((uint32_t)(iVar4 + 8), iVar5);
        cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_1007C4DA), 3u, (const CowU32[]){ iVar4, 0xc, 0 }, g->ecx, g->edx, g->eax, 12u);
      }
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007c390(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1007c390: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1007c391: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1007c392: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007c393: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1007c394: push edi */
    cow_lift_1007c390(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
