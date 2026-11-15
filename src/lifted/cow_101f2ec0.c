/* f_0x101f2ec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f2ec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f2ec0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    char cVar2;
    CowU32 puVar3;
    CowU32 this;
    int iVar4;
    CowU32 uVar5;
    puVar3 = (CowU32)cow_bridge_101f1120(g, COW_IMG(COW_ADDR_LIFT_101F2ED0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((puVar3 == (CowU32)0x0) || (puVar3 != rd16((uint32_t)(param_1 + 0x14)))) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101F2EEB), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      }
      cow_bridge_1013e2f0(g, COW_IMG(COW_ADDR_LIFT_101F2EF9), 2u, (const CowU32[]){ puVar3, 1 }, rd32(COW_IMG(COW_ADDR_LIFT_10578204)), g->edx, g->eax, 0u);
      if (puVar3 == (CowU32)0x0) {
    L_101f2fc5:
        uVar5 = 5;
      }
      else {
        this = (CowU32)cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_101F2F12), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)puVar3) }, rd32(COW_IMG(COW_ADDR_LIFT_10621808)), g->edx, g->eax, 0u);
        if (this != (CowU32)0x0) {
          if (rd16((uint32_t)((int)this + 0x14b4)) == (CowU32)0x0) {
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2F32), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2F3E), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          sVar1 = rd16((uint32_t)rd32((uint32_t)(((int)this + 0x14b4))));
          if (((sVar1 == 8) || (sVar1 == 0x16)) || (sVar1 == 0x17)) {
    L_101f2f87:
            iVar4 = cow_bridge_10118bc0(g, COW_IMG(COW_ADDR_LIFT_101F2F91), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
            if (iVar4 != 5) goto L_101f2fa2;
            uVar5 = 0xb;
          }
          else {
            cVar2 = cow_bridge_1015b6c0(g, COW_IMG(COW_ADDR_LIFT_101F2F60), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
            if (cVar2 != '\0') goto L_101f2f87;
            cVar2 = cow_bridge_1015b6f0(g, COW_IMG(COW_ADDR_LIFT_101F2F6B), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
            if (cVar2 != '\0') {
              cVar2 = cow_bridge_101cc3a0(g, COW_IMG(COW_ADDR_LIFT_101F2F7A), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x14)), 0 }, g->ecx, g->edx, g->eax, 8u);
              if (cVar2 != '\0') goto L_101f2f87;
            }
            uVar5 = 5;
          }
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2FA2), 2u, (const CowU32[]){ uVar5, 1 }, g->ecx, g->edx, g->eax, 0u);
        }
    L_101f2fa2:
        if (((char)rd16((uint32_t)(puVar3 + 2u * (uint32_t)(4))) != '\0') || (rd16((uint32_t)puVar3) == 0xffff)) goto L_101f2fc5;
        iVar4 = cow_bridge_10118bc0(g, COW_IMG(COW_ADDR_LIFT_101F2FBA), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 != 5) goto L_101f2fd1;
        uVar5 = 0xb;
      }
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2FD1), 2u, (const CowU32[]){ uVar5, 2 }, g->ecx, g->edx, g->eax, 0u);
    L_101f2fd1:
      cVar2 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_101F2FD6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar2 != '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2FE6), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f2ec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101f2ec0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f2ec1: push esi */
    g->esi = g->ecx;   /* 0x101f2ec2: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10663740));   /* 0x101f2ec4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f2eca: push edi */
    cow_lift_101f2ec0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
