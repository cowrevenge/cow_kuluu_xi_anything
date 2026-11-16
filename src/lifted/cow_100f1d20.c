/* f_0x100f1d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f1d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x28u);
        if (rd32(self + 0x24u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x24u);
            if (eax == ecx)
            {
                edx = in_edx;
            }
            else
            {
                if (rd16(ecx + 0x1058u) == 0u)
                {
                    edx = in_edx;
                }
                else
                {
                    g->esp = sp0 - 4u;
                    t1 = cow_fastcall(g, COW_IMG(0x100f2c80u), ecx, in_edx, 1, 0u);
                    t2 = g->edx;
                    eax = t1;
                    edx = t2;
                }
            }
        }
    }
    if (rd8(self + 7u) != 0u)
    {
        ecx = rd32(self + 0x28u);
        goto L_100f1de6;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 7u);
    ecx = rd32(self + 0x28u);
    if (ecx == 0u) goto L_100f1d9e;
    if (ecx != rd32(self + 0x24u))
    {
        eax = rd32(self + 0x24u);
        goto L_100f1d6d;
    }
    eax = rd32(self + 0x24u);
    if (rd16(eax + 0x1058u) != 0u) goto L_100f1e5a;
L_100f1d6d: ;
    if (ecx == 0u) goto L_100f1d9e;
    if (ecx == rd32(self + 0x24u)) goto L_100f1d9e;
    if (ecx == rd32(self + 0x20u)) goto L_100f1d9e;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x100f2c40u), eax, ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100f1d9e;
    }
    eax = t3;
    edx = t4;
    if (rd8(self + 6u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 6u);
        goto L_100f1d9e;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 6u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x100f2b80u), rd32(self + 0x28u), edx, 0);
    wr32(self + 0x28u, 0u);
    return (t5 & 0xffffff00u) | 1u;
L_100f1d9e: ;
    if (rd32(self + 0x28u) != 0u)
    {
        ecx = rd32(self + 0x28u);
        goto L_100f1dcd;
    }
    ecx = rd32(self + 0x28u);
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        goto L_100f1dc5;
    }
    eax = rd32(self + 0x24u);
    if (rd16(eax + 0x1058u) == (uint16_t)ecx) goto L_100f1dc5;
    wr32(self + 0x28u, eax);
    g->esp = sp0 - 4u;
    t6 = cow_fastcall(g, COW_IMG(0x100f2c80u), eax, edx, 1, 0u);
    return (t6 & 0xffffff00u) | 1u;
L_100f1dc5: ;
    if (ecx == 0u) goto L_100f1e61;
L_100f1dcd: ;
    if (rd16(ecx + 0x1058u) == 0u) goto L_100f1e61;
    g->esp = sp0 - 4u;
    t7 = cow_fastcall(g, COW_IMG(0x100f2c80u), ecx, edx, 1, 0u);
    return (t7 & 0xffffff00u) | 1u;
L_100f1de6: ;
    if (ecx == 0u) goto L_100f1df4;
    if (rd16(ecx + 0x1058u) != 0u) goto L_100f1e5a;
L_100f1df4: ;
    if (rd32(self + 0x24u) == 0u) goto L_100f1e13;
    ecx = rd32(self + 0x24u);
    if (rd16(ecx + 0x1058u) == 0u) goto L_100f1e13;
    wr32(self + 0x28u, ecx);
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x100f2c80u), ecx, edx, 1, 0u);
    return (t8 & 0xffffff00u) | 1u;
L_100f1e13: ;
    if (rd32(self + 0x20u) == 0u) goto L_100f1e32;
    ecx = rd32(self + 0x20u);
    if (rd16(ecx + 0x1058u) == 0u) goto L_100f1e32;
    wr32(self + 0x28u, ecx);
    g->esp = sp0 - 4u;
    t9 = cow_fastcall(g, COW_IMG(0x100f2c80u), ecx, edx, 1, 0u);
    return (t9 & 0xffffff00u) | 1u;
L_100f1e32: ;
    t10 = rd32(self + 0x1cu);
    t11 = rd32(self + 0x1cu);
    wr32(self + 0x28u, t10);
    if (t11 == 0u)
    {
        eax = t10;
        goto L_100f1e61;
    }
L_100f1e3c: ;
    if (rd16(rd32(self + 0x28u) + 0x1058u) != 0u) goto L_100f1e57;
    eax = rd32(self + 0x28u);
    t12 = rd32(eax + 4u);
    t13 = rd32(eax + 4u);
    wr32(self + 0x28u, t12);
    if (t13 != 0u) goto L_100f1e3c;
    eax = t12;
    return (eax & 0xffffff00u) | 1u;
L_100f1e57: ;
    ecx = rd32(self + 0x28u);
L_100f1e5a: ;
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x100f2c80u), ecx, edx, 1, 0u);
    eax = t14;
L_100f1e61: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
