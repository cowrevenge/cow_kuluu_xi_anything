/* f_0x10307821 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10307821(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(rd32(sp0 + 4u) + 0x1a4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x4cu);
    wr32(sp0 + 4u, t1);
    if (t4 == 0u)
    {
        eax = t1;
        esi = t2;
        edi = t3;
    }
    else
    {
        eax = t1;
        esi = t2;
        edi = t3;
        wr32(esi + 0x4cu, 2u);
    }
    if ((uint8_t)arg2 == 0u)
    {
        if (rd32(esi + 0x4cu) != 2u)
        {
            wr32(edi + 4u, COW_IMG(0x10307457u));
        }
        else
        {
            wr32(edi + 4u, COW_IMG(0x10307500u));
        }
        wr32(edi + 8u, COW_IMG(0x10307820u));
        if ((int32_t)rd32(esi + 0x70u) >= 1)
        {
            ecx = self;
            edx = in_edx;
            ebx = rd32(esi + 0x70u);
        }
        else
        {
            ebx = rd32(esi + 0x70u);
            wr32(rd32(esi) + 0x14u, 0x37u);
            t5 = rd32(esi);
            wr32(t5 + 0x18u, 1u);
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall_cdecl(g, rd32(rd32(esi)), t5, 1, esi);
            t6 = g->edx;
            ecx = esi;
            edx = t6;
        }
        if ((int32_t)ebx <= 256)
        {
            eax = 0x100u;
        }
        else
        {
            wr32(rd32(esi) + 0x14u, 0x38u);
            t7 = rd32(esi);
            wr32(t7 + 0x18u, 0x100u);
            g->eax = rd32(esi);
            g->edx = edx;
            t8 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall_cdecl(g, rd32(t8), t7, 1, esi);
            t10 = g->edx;
            eax = t9;
            ecx = esi;
            edx = t10;
        }
        if (rd32(esi + 0x4cu) == 2u)
        {
            if (rd32(edi + 0x20u) != 0u)
            {
                eax = rd32(esi + 0x5cu) + 2u;
                ebx = rd32(esi + 0x5cu) * 6u + 0xcu;
            }
            else
            {
                ebx = rd32(esi + 0x5cu) * 6u + 0xcu;
                g->eax = rd32(esi + 4u);
                g->edx = edx;
                t11 = rd32(esi + 4u);
                g->esp = sp0 - 0x10u;
                t12 = cow_thiscall_cdecl(g, rd32(t11 + 4u), ecx, 3, esi, 1u, ebx);
                t13 = g->ecx;
                t14 = g->edx;
                wr32(edi + 0x20u, t12);
                eax = t12;
                ecx = t13;
                edx = t14;
            }
            t15 = rd32(edi + 0x20u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t16 = cow_cdecl(g, COW_IMG(0x102f595eu), 3, t15, ebx, in_ebx);
            t17 = g->edx;
            if (rd32(edi + 0x28u) != 0u)
            {
                eax = t16;
                ecx = ebx;
                edx = t17;
            }
            else
            {
                ecx = ebx;
                edx = t17;
                g->ecx = ecx;
                g->esp = sp0 - 0x10u;
                t18 = cow_call_regs(g, COW_IMG(0x1030776eu), esi, g->ecx, edx, 1, 0);
                t19 = g->ecx;
                t20 = g->edx;
                eax = t18;
                ecx = t19;
                edx = t20;
            }
            wr8(edi + 0x24u, 0u);
        }
    }
    else
    {
        wr32(edi + 4u, COW_IMG(0x103069e5u));
        wr32(edi + 8u, COW_IMG(0x103077feu));
        wr8(edi + 0x1cu, 1u);
        ecx = self;
        edx = in_edx;
    }
    if (rd8(edi + 0x1cu) != 0u)
    {
        esi = 0u;
L_10307903: ;
        t21 = rd32(esi * 4u + rd32(sp0 + 4u));
        g->eax = rd32(sp0 + 4u);
        g->edx = edx;
        t22 = rd32(sp0 + 4u);
        g->esp = sp0 - 8u;
        t23 = cow_cdecl(g, COW_IMG(0x102f595eu), 3, t21, 0x1000u, in_edi);
        t24 = g->edx;
        if ((int32_t)(esi + 1u) < 32)
        {
            ecx = 0x1000u;
            edx = t24;
            esi = esi + 1u;
            goto L_10307903;
        }
        eax = t23;
        edx = t24;
        wr8(edi + 0x1cu, 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307821(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307821(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
