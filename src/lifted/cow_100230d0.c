/* f_0x100230d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=3 */
uint32_t cow_fn_100230d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 0xcu);
    t2 = rd16(rd32(sp0 + 8u));
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 0xcu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, t1, t2);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        ebx = t1;
        edi = t3;
    }
    else
    {
        ebx = t1;
        esi = t1;
        edi = t3;
        t6 = rd32(edi + 6u);
        wr32(esi + 0x18u, t6);
        t7 = rd32(edi + 0xau);
        wr32(esi + 0x1cu, t7);
        t8 = rd16(edi + 2u);
        g->edx = esi + 0x20u;
        g->esp = sp0 - 0x10u;
        t9 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, esi + 0x20u, t8);
        t10 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            edx = t10;
        }
        else
        {
            t11 = rd32(edi + 0xeu);
            wr32(esi + 0x38u, t11);
            t12 = rd32(edi + 0x12u);
            wr32(esi + 0x3cu, t12);
            t13 = rd16(edi + 4u);
            g->edx = esi + 0x40u;
            g->esp = sp0 - 0x10u;
            t14 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, esi + 0x40u, t13);
            t15 = g->edx;
            if ((uint8_t)t14 == 0u)
            {
                edx = t15;
            }
            else
            {
                edx = t15;
                t16 = rd32(edi + 0x16u);
                wr32(esi + 0x58u, t16);
                t17 = rd32(edi + 0x1au);
                wr32(esi + 0x5cu, t17);
                wr32(sp0 + 0xcu, 3u);
                ebx = esi + 0x60u;
            }
        }
    }
    if (arg1 <= 1u)
    {
        eax = arg1;
    }
    else
    {
        edi = edi + 0x1eu;
        wr32(sp0 + 8u, arg1 - 1u);
        esi = edi + 6u;
L_10023171: ;
        t18 = rd16(esi - 6u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t19 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, ebx, t18);
        t20 = g->edx;
        if ((uint8_t)t19 == 0u)
        {
            edx = t20;
        }
        else
        {
            t21 = rd32(esi - 4u);
            wr32(ebx + 0x18u, t21);
            wr32(ebx + 0x1cu, rd32(esi));
            t22 = rd32(sp0 + 0xcu) + 1u;
            wr32(sp0 + 0xcu, t22);
            edx = t21;
            ebx = ebx + 0x20u;
        }
        t23 = rd32(sp0 + 8u) - 1u;
        t24 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t23);
        if (t24 != 1u)
        {
            esi = esi + 0xau;
            goto L_10023171;
        }
        eax = t23;
    }
    return (eax & 0xffff0000u) | rd16(sp0 + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100230d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100230d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
