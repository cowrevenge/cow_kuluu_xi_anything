/* f_0x101180f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101180f0(Guest* g)
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
    uint32_t t2;
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
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        esi = in_esi;
        loc_4 = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_esi);
L_10118109: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            goto L_10118154;
        }
        edx = t4;
        ebx = eax;
        eax = t3;
        esi = t3;
        wr32(sp0 - 0x18u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, ebx);
        t5 = g->edx;
        if ((uint32_t)(int16_t)rd16(esi) == 0u)
        {
            eax = (uint32_t)(int16_t)rd16(esi);
            edx = t5;
            goto L_1011813c;
        }
        eax = (uint32_t)(int16_t)rd16(esi);
        edx = t5;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_10118133;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_1011814c;
        eax = eax - 1u;
L_10118133: ;
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
L_10118143: ;
        wr32(sp0 - 0x18u, esi);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t12 = g->edx;
        edx = t12;
L_1011814c: ;
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_10118109;
        }
        eax = rd32(sp0 - 4u);
L_10118154: ;
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101265d0u), self + 0x14u, 0);
    wr32(self + 4u, 0u);
    g->ebx = ebx;
    g->esi = esi;
    return;
L_1011813c: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t9 = cow_fastcall(g, COW_IMG(0x10119360u), esi, edx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    goto L_10118143;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101180f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101180f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
