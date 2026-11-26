/* f_0x102fc4cf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102fc4cf(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102fc4f6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102fc4f6;
    case 0x102fc51du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102fc51d;
    case 0x102fc559u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102fc559;
    default: break;
    }
#endif

    COW_AT(102fc4cf)
    t1 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x24u, t1);
    t2 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t3);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->esp = sp0 - 0x20u;
    COW_RET(0x102fc4f6u);
    cow_stdcall(g, COW_IMG(0x102fc30bu), 4, sp0 - 0x20u, t3, t2, t1);
    t4 = g->ebx;
    t5 = g->esi;
    ebx = t4;
    esi = t5;
    COW_AT(102fc4f6)
    t6 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x28u, t7);
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, t8);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->ebx = ebx;
    g->esi = esi;
    g->esp = sp0 - 0x20u;
    COW_RET(0x102fc51du);
    cow_stdcall(g, COW_IMG(0x102fc30bu), 4, sp0 - 0x10u, t8, t7, t6);
    t9 = g->ebx;
    t10 = g->esi;
    ebx = t9;
    esi = t10;
    COW_AT(102fc51d)
    { /* movd mm0, dword ptr [esp + 0x48] */ uint32_t A = sp0 + 0x18u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    t11 = rd32(sp0 + 4u);
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfsub mm1, mm0 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[0]); }
    wr32(sp0 - 0x30u, t11);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    { /* pfmul mm1, qword ptr [0x10348488] */ uint32_t A = COW_IMG(0x10348488u); g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movd dword ptr [esp + 0xc], mm1 */ uint32_t A = sp0 - 0x24u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    g->ebx = ebx;
    g->esi = esi;
    g->eax = t11;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    COW_RET(0x102fc559u);
    t12 = cow_stdcall(g, COW_IMG(0x102fc30bu), 4, t11, sp0 - 0x20u, sp0 - 0x10u, rd32(sp0 - 0x24u));
    t13 = g->edx;
    t14 = g->ebx;
    t15 = g->esi;
    eax = t12;
    edx = t13;
    ebx = t14;
    esi = t15;
    COW_AT(102fc559)
    { /* femms  */  }
    g->ebx = ebx;
    g->esi = esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102fc4cf(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102fc4f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102fc51du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102fc559u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc4cf(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102fc4cf(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
