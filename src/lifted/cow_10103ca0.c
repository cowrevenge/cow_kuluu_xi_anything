/* f_0x10103ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10103ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q13;
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
    uint32_t zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 == 0u)
    {
        ecx = arg4;
        esi = 0x7b2u;
        goto L_10103cf3;
    }
    ecx = arg4;
    esi = 0x7b2u;
L_10103cb0: ;
    if ((int32_t)(esi & 0x80000003u) >= 0)
    {
        zf = (esi & 0x80000003u) == 0u;
    }
    else
    {
        eax = esi & 0x80000003u;
        zf = (eax - 1u | 0xfffffffcu) + 1u == 0u;
    }
    if (!zf) goto L_10103cce;
    t1 = cow_divs(g, esi, 0x64u);
    t2 = cow_mods(g, esi, 0x64u);
    if (t2 != 0u) goto L_10103ce0;
L_10103cce: ;
    t3 = cow_divs(g, esi, 0x190u);
    t4 = cow_mods(g, esi, 0x190u);
    if (t4 == 0u) goto L_10103ce0;
    eax = 0u;
L_10103ce5: ;
    if (ecx != rd32(COW_IMG(0x10364878u) + eax * 4u))
    {
        ecx = ecx - rd32(COW_IMG(0x10364878u) + eax * 4u);
        esi = esi + 1u;
        goto L_10103cb0;
    }
    ecx = ecx - rd32(COW_IMG(0x10364878u) + eax * 4u);
    esi = esi + 1u;
L_10103cf3: ;
    wr16(arg1, (uint16_t)(esi - 1u));
    if ((int32_t)(esi - 1u & 0x80000003u) >= 0)
    {
        edi = esi - 1u & 0x80000003u;
        zf = (esi - 1u & 0x80000003u) == 0u;
        esi = esi - 1u;
    }
    else
    {
        edi = esi - 1u & 0x80000003u;
        esi = esi - 1u;
        zf = (edi - 1u | 0xfffffffcu) + 1u == 0u;
        edi = (edi - 1u | 0xfffffffcu) + 1u;
    }
    if (!zf) goto L_10103d1a;
    t5 = cow_divs(g, esi, 0x64u);
    t6 = cow_mods(g, esi, 0x64u);
    if (t6 != 0u) goto L_10103d2c;
L_10103d1a: ;
    t7 = cow_divs(g, esi, 0x190u);
    t8 = cow_mods(g, esi, 0x190u);
    if (t8 == 0u) goto L_10103d2c;
    eax = 0u;
L_10103d31: ;
    if (edi != 0u)
    {
        ecx = ecx + rd32(COW_IMG(0x10364878u) + eax * 4u);
        goto L_10103d4a;
    }
    ecx = ecx + rd32(COW_IMG(0x10364878u) + eax * 4u);
    t9 = cow_divs(g, esi, 0x64u);
    t10 = cow_mods(g, esi, 0x64u);
    if (t10 != 0u) goto L_10103d5c;
L_10103d4a: ;
    t11 = cow_divs(g, esi, 0x190u);
    t12 = cow_mods(g, esi, 0x190u);
    if (t12 == 0u) goto L_10103d5c;
    esi = 0u;
L_10103d61: ;
    if (ecx == 0u)
    {
        edx = 0u;
    }
    else
    {
        eax = COW_IMG(0x10364818u) + esi * 0x30u;
        edx = 0u;
L_10103d72: ;
        if (ecx != rd32(eax))
        {
            ecx = ecx - rd32(eax);
            eax = eax + 4u;
            edx = edx + 1u;
            goto L_10103d72;
        }
        ecx = ecx - rd32(eax);
        edx = edx + 1u;
    }
    wr8(arg2, (uint8_t)(edx - 1u));
    q13 = (uint64_t)cow_mulu(0xc22e4507u, ecx + rd32(COW_IMG(0x10364818u) + edx * 4u + esi * 0x30u - 4u));
    wr8(arg3, (uint8_t)(cow_qhi(q13) >> 0x10u));
    g->edx = cow_qhi(q13) >> 0x10u;
    return (arg3 & 0xffffff00u) | 1u;
L_10103ce0: ;
    eax = 1u;
    goto L_10103ce5;
L_10103d2c: ;
    eax = 1u;
    goto L_10103d31;
L_10103d5c: ;
    esi = 1u;
    goto L_10103d61;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103ca0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
