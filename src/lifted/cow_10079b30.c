/* f_0x10079b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079b30(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1047d490u)) == 2u) goto L_10079ba1;
    eax = rd32(COW_IMG(0x1047d490u)) - 2u;
    if (eax == 1u) goto L_10079b46;
    return -arg3;
L_10079b46: ;
    if (rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 8u) + 1u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        ecx = (self & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 8u) + 1u);
        t4 = (in_edx & 0xffffff00u) | rd8(eax);
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10079c10u), eax, ecx, t4, 1, 1, t4);
        t6 = g->edx;
        t7 = (t6 & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 8u) + 1u);
        t8 = rd32(COW_IMG(0x103551e0u));
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x10079c10u), t8, rd32(t8 + 8u), t7, 1, 1, t7);
        t10 = g->edx;
        eax = t9;
        edx = t10;
        esi = t5;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            esi = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            esi = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            if (esi == 2u) goto L_10079b6f;
            if (esi != 3u) goto L_10079b74;
L_10079b6f: ;
            esi = 1u;
        }
L_10079b74: ;
        t1 = (ecx & 0xffffff00u) | rd8(eax);
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x10079c10u), eax, t1, edx, 1, 1, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
L_10079bdc: ;
    t12 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t13 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x100ec2a0u), 5, esi, t12, eax, COW_IMG(0x10079d40u), 0u);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = arg3;
        edx = t15;
    }
    else
    {
        edx = t15;
        eax = -arg3;
    }
    g->edx = edx;
    return eax;
L_10079ba1: ;
    t11 = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (!(rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        ecx = t11;
        edx = t11;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        ecx = t11;
        edx = t11;
        if (ecx == 2u) goto L_10079bc0;
        if (ecx != 3u) goto L_10079bc5;
L_10079bc0: ;
        ecx = 1u;
    }
L_10079bc5: ;
    if (eax == 0u)
    {
        esi = ecx;
    }
    else
    {
        esi = ecx;
        if (edx == 2u) goto L_10079bd5;
        if (edx != 3u) goto L_10079bda;
L_10079bd5: ;
        edx = 1u;
    }
L_10079bda: ;
    eax = edx;
    goto L_10079bdc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
