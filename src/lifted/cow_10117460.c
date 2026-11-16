/* f_0x10117460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10117460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        loc_4 = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
        wr32(sp0 - 0x14u, in_ebx);
L_1011747b: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        if ((uint32_t)(int16_t)rd16(t3) == 0u)
        {
            edx = t4;
            ebx = eax;
            eax = (uint32_t)(int16_t)rd16(t3);
            esi = t3;
            goto L_101174aa;
        }
        edx = t4;
        ebx = eax;
        eax = (uint32_t)(int16_t)rd16(t3);
        esi = t3;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10117499;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_101174c2;
        eax = eax - 1u;
L_10117499: ;
        wr32(sp0 - 0x18u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, ebx);
        t6 = g->edx;
        g->ecx = esi;
        g->edx = t6;
        t7 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
L_101174b9: ;
        wr32(sp0 - 0x18u, esi);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t15 = g->edx;
        edx = t15;
L_101174c2: ;
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_1011747b;
        }
        eax = rd32(sp0 - 4u);
        ebx = rd32(sp0 - 0x14u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101265d0u), self + 0x14u, 0);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(self + 0x88u);
    wr32(self + 4u, 0u);
    wr32(self + 0x7cu, 0u);
    if (t18 == 0u)
    {
        eax = t18;
        edx = t17;
    }
    else
    {
        eax = t18;
        ecx = t16;
        edx = t17;
        wr32(sp0 - 0x14u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t20 = g->edx;
        wr32(self + 0x88u, 0u);
        eax = t19;
        edx = t20;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_fastcall(g, COW_IMG(0x10126370u), self + 0x14u, edx, 0);
    t22 = g->edx;
    cow_stdcall(g, COW_IMG(0x10126330u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_101174aa: ;
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, ebx);
    t11 = g->edx;
    t12 = cow_fastcall(g, COW_IMG(0x10119360u), esi, t11, 0);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_101174b9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10117460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
