/* f_0x1017afe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017afe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_ebp);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0xfu;
    edi = 0xffffffffu;
L_1017b005: ;
    t1 = rd8(arg3 + eax);
    wr8(eax + sp0 - 0x100u, (uint8_t)t1);
    if ((int32_t)edi >= 0)
    {
        ecx = (ecx & 0xffffff00u) | t1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t1;
        if ((uint8_t)ecx > 0x20u)
        {
            edi = eax;
        }
    }
    if ((int32_t)(eax - 1u) > -1)
    {
        eax = eax - 1u;
        goto L_1017b005;
    }
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t2 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, arg3, 0u);
    t3 = g->edx;
    wr32(arg2 + 0x18u, t2);
    wr32(arg2 + 0x10u, t2);
    wr32(arg2 + 0x14u, t2);
    if ((int32_t)edi < 1)
    {
        eax = t2;
    }
    else
    {
        eax = t2;
        edx = t3;
        if (rd8(edi + sp0 - 0x100u) == 0x68u)
        {
            edi = edi + sp0 - 0x100u;
            goto L_1017b05f;
        }
        eax = (eax & 0xffffff00u) | rd8(edi + sp0 - 0x100u);
        edi = edi + sp0 - 0x100u;
        if ((uint8_t)eax == 0x6du) goto L_1017b05f;
        if ((uint8_t)eax != 0x6cu) goto L_1017b0d5;
L_1017b05f: ;
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x6du);
        g->esp = sp0 - 0x110u;
        t4 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        if (t4 != 0u)
        {
            eax = t4;
            wr32(arg2 + 0x10u, eax);
            wr32(arg2 + 0x14u, eax);
            wr32(arg2 + 0x18u, eax);
        }
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x68u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x110u;
        t5 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            t7 = rd32(arg2 + 0x14u);
            wr32(arg2 + 0x18u, eax);
            if (t7 == 0u)
            {
                wr32(arg2 + 0x14u, eax);
            }
            if (rd32(arg2 + 0x10u) == 0u)
            {
                wr32(arg2 + 0x10u, eax);
            }
        }
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x6cu);
        g->esp = sp0 - 0x110u;
        t8 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        if (t8 == 0u)
        {
            eax = t8;
        }
        else
        {
            eax = t8;
            t9 = rd32(arg2 + 0x18u);
            wr32(arg2 + 0x10u, eax);
            if (t9 == 0u)
            {
                wr32(arg2 + 0x18u, eax);
            }
            if (rd32(arg2 + 0x14u) == 0u)
            {
                wr32(arg2 + 0x14u, eax);
            }
        }
    }
L_1017b0d5: ;
    wr16(arg2 + 0xd6u, 0u);
    if (rd8(arg3) != 0x5fu)
    {
        ebx = rd32(sp0 - 0x110u);
    }
    else
    {
        ebx = rd32(sp0 - 0x110u);
        wr16(arg2 + 0xd6u, 1u);
    }
    if (rd8(arg3) == 0x23u)
    {
        wr16(arg2 + 0xd6u, 2u);
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->ebp = rd32(sp0 - 0x104u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017afe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017afe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
