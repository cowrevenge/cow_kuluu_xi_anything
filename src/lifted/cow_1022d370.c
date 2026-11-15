/* f_0x1022d370 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022d370 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022d370(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    switch(rd32((uint32_t)(param_1 + 0x10))) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xf:
        wr8((uint32_t)(param_1 + 0x1e), 1);
        break;
      case 7:
      case 8:
        wr8((uint32_t)(param_1 + 0x1e), 1);
        wr8((uint32_t)(param_1 + 0x20), 1);
        break;
      case 9:
        wr8((uint32_t)(param_1 + 0x20), 1);
      case 1:
        wr8((uint32_t)(param_1 + 0x1d), 1);
        break;
      case 0xe:
        wr8((uint32_t)(param_1 + 0x1f), 1);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 4)) == 2) {
        wr8((uint32_t)(param_1 + 0x22), 1);
      }
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x1c));
      cVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033C49C) + 4u * (uint32_t)((CowU8)((-((int8_t)rd8((uint32_t)(param_1 + 0x22)) != '\x01') & 2U) +
                      (-((int8_t)rd8((uint32_t)(param_1 + 0x1e)) != '\x01') & 4U) + (cVar1 != '\x01')))));
      wr32((uint32_t)(param_1 + 0x14), 0);
      if ((cVar1 == '\0') && ((int8_t)rd8((uint32_t)(param_1 + 0x20)) != '\0')) {
        cVar2 = '\0';
      }
      if (((int8_t)rd8((uint32_t)(param_1 + 0x21)) != '\0') && ((int8_t)rd8((uint32_t)(param_1 + 0x1f)) != '\0')) {
        cVar2 = '\x03';
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x23)) != '\0') {
        cVar2 = '\x02';
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x1d)) != '\0') {
        cVar2 = (cVar1 != '\0') + '\x01';
      }
      iVar3 = cow_bridge_101cc510(g, COW_IMG(COW_ADDR_LIFT_1022D41C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      switch(cVar2) {
      case '\0':
        if ((((int8_t)rd8((uint32_t)(param_1 + 0x1c)) == '\0') || (iVar3 != 0)) &&
           (iVar3 = cow_bridge_10157cb0(g, COW_IMG(COW_ADDR_LIFT_1022D45B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar3 != 0)) {
          wr32((uint32_t)(param_1 + 0x14), rd32((uint32_t)(iVar3 + 4)));
          g->eax = (CowU32)(cVar2); return;
        }
        break;
      case '\x01':
        if (((int8_t)rd8((uint32_t)(param_1 + 0x1c)) == '\0') || (iVar3 != 0)) {
          if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) == 0) {
            wr32((uint32_t)(param_1 + 0x14), 0);
            g->eax = (CowU32)(cVar2); return;
          }
          wr32((uint32_t)(param_1 + 0x14), rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x78)));
          g->eax = (CowU32)(cVar2); return;
        }
        break;
      case '\x02':
        if (iVar3 != 0) {
          wr32((uint32_t)(param_1 + 0x14), rd32((uint32_t)(iVar3 + 0x78)));
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar2) & 0xffu)); return;
        }
        break;
      case '\x03':
        if (iVar3 != 0) {
          iVar4 = cow_bridge_10087630(g, COW_IMG(COW_ADDR_LIFT_1022D4BE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x14), iVar4);
          if ((int32_t)rd32((uint32_t)(iVar3 + 0x78)) != iVar4) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar2) & 0xffu)); return;
          }
        }
        break;
      default:
        goto switchD_1022d430_default;
      }
      wr32((uint32_t)(param_1 + 0x14), 0);
    switchD_1022d430_default:
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022d370(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022d370: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022d371: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1022d372: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022d376: push edi */
    { g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x1022d377: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1022d379: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1022d37c: register eax, replayed as the entry ran it */
    cow_lift_1022d370(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
