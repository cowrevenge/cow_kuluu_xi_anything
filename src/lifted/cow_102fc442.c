/* f_0x102fc442 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102fc442(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x24u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102fc475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102fc475;
    case 0x102fc488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102fc488;
    case 0x102fc4beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102fc4be;
    default: break;
    }
#endif

    COW_AT(102fc442)
    wr32(sp0 - 4u, in_ebp);
    { /* femms  */  }
    { /* movd mm0, dword ptr [ebp + 0x38] */ uint32_t A = sp0 + 0x14u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm1, dword ptr [ebp + 0x3c] */ uint32_t A = sp0 + 0x18u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* movd dword ptr [ebp + 0x38], mm0 */ uint32_t A = sp0 + 0x14u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movd dword ptr [esp], mm0 */ uint32_t A = sp1 - 4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    t1 = rd32(sp0 + 0xcu);
    wr32(sp1 - 8u, t1);
    t2 = rd32(sp0 + 8u);
    wr32(sp1 - 0xcu, t2);
    wr32(sp1 - 0x10u, sp1);
    g->ecx = self;
    g->esp = sp1;
    COW_RET(0x102fc475u);
    t3 = cow_stdcall(g, COW_IMG(0x102fc30bu), 4, sp1, t2, t1, rd32(sp1 - 4u));
    t4 = g->ecx;
    t5 = g->ebx;
    t6 = g->esi;
    eax = t3;
    ecx = t4;
    ebx = t5;
    esi = t6;
    COW_AT(102fc475)
    t7 = rd32(sp0 + 0x14u);
    wr32(sp1 - 4u, t7);
    t8 = rd32(sp0 + 0x10u);
    wr32(sp1 - 8u, t8);
    t9 = rd32(sp0 + 8u);
    wr32(sp1 - 0xcu, t9);
    wr32(sp1 - 0x10u, sp1 + 0x10u);
    g->ebx = ebx;
    g->esi = esi;
    g->eax = eax;
    g->esp = sp1;
    COW_RET(0x102fc488u);
    t10 = cow_stdcall(g, COW_IMG(0x102fc30bu), 4, sp1 + 0x10u, t9, t8, t7);
    t11 = g->ebx;
    t12 = g->esi;
    eax = t10;
    ebx = t11;
    esi = t12;
    COW_AT(102fc488)
    { /* movd mm0, dword ptr [ebp + 0x38] */ uint32_t A = sp0 + 0x14u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm1, dword ptr [ebp + 0x3c] */ uint32_t A = sp0 + 0x18u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcp mm2, mm0 */ g->mm[2] = n3d_pfrcp(g->mm[2], g->mm[0]); }
    { /* pfrcpit1 mm0, mm2 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[2]); }
    { /* pfrcpit2 mm0, mm2 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[2]); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    wr32(sp1 - 8u, sp1 + 0x10u);
    wr32(sp1 - 0xcu, sp1);
    { /* movd dword ptr [esp + 8], mm0 */ uint32_t A = sp1 - 4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    t13 = rd32(sp0 + 4u);
    wr32(sp1 - 0x10u, t13);
    g->ebx = ebx;
    g->esi = esi;
    g->edx = sp1 + 0x10u;
    g->esp = sp1;
    COW_RET(0x102fc4beu);
    cow_stdcall(g, COW_IMG(0x102fc30bu), 4, t13, sp1, sp1 + 0x10u, rd32(sp1 - 4u));
    t14 = g->edx;
    t15 = g->ebx;
    t16 = g->esi;
    edx = t14;
    ebx = t15;
    esi = t16;
    COW_AT(102fc4be)
    t17 = rd32(sp0 + 4u);
    { /* femms  */  }
    g->ebx = ebx;
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return t17;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102fc442(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x24u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102fc475u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1;
        g->ebp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102fc488u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1;
        g->ebp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102fc4beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1;
        g->ebp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc442(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102fc442(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
