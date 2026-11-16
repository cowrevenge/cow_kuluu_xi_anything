/* f_0x101e80f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e80f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    esi = arg1;
    edi = COW_IMG(0x10663594u);
    ecx = 0x2cu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x105781f8u));
    wr32(COW_IMG(0x1066358cu), t1);
    wr8(COW_IMG(0x10663588u), 1u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1013a320u), t3, 2, 0u, 2u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t5;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 2u);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x1066362cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066362cu));
    }
    else
    {
        eax = COW_IMG(0x10381213u);
        ecx = (ecx & 0xffffff00u) | 0x14u;
L_101e8145: ;
        wr8(eax - 1u, (uint8_t)ecx);
        wr8(eax, (uint8_t)ecx);
        if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x103812b3u))
        {
            eax = eax + 0x20u;
            goto L_101e8145;
        }
        t8 = rd32(COW_IMG(0x10663630u));
        wr8(COW_IMG(0x103811f0u) + (t8 & 3u) * 0x20u + 0x20u, rd8(COW_IMG(0x103811f0u) + (t8 & 3u) * 0x20u + 0x20u) | 4u);
        wr8(COW_IMG(0x103811f2u) + (t8 & 3u) * 0x20u + 0x20u, 0x13u);
        eax = (t8 & 3u) * 0x20u + 0x20u;
    }
    if (rd8(COW_IMG(0x10663628u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10663628u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10663628u));
        ebx = COW_IMG(0x106635adu);
        edi = COW_IMG(0x1037fd6cu);
L_101e8182: ;
        if ((int8_t)(rd8(ebx) + 3u) < 0)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(rd8(ebx) + 3u);
            edx = (edx & 0xffffff00u) | rd8(ebx);
            goto L_101e818e;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)(rd8(ebx) + 3u);
        edx = (edx & 0xffffff00u) | rd8(ebx);
        if ((int8_t)eax < 24) goto L_101e8190;
L_101e818e: ;
        eax = (eax & 0xffffff00u) | 8u;
L_101e8190: ;
        wr8(edi - 0x1au, (uint8_t)eax);
        ecx = COW_IMG(0x1037ffb2u);
        esi = (esi & 0xffff0000u) | rd16(rd32(edi));
L_101e819d: ;
        if (rd16(rd32(ecx + 0x1au)) != (uint16_t)esi)
        {
            eax = rd32(ecx + 0x1au);
        }
        else
        {
            eax = rd32(ecx + 0x1au);
            if ((int8_t)edx <= 0) goto L_101e81c2;
            if ((int8_t)edx > 3) goto L_101e81c2;
            if ((rd16(eax + 6u) & 0x100u) == 0u)
            {
                eax = rd16(eax + 6u) & 0x100u;
                goto L_101e81c2;
            }
            eax = rd16(eax + 6u) & 0x100u;
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)edx + 0xeu);
L_101e81c6: ;
            if ((int8_t)eax < 0) goto L_101e81ce;
            if ((int8_t)eax < 24) goto L_101e81d0;
L_101e81ce: ;
            eax = (eax & 0xffffff00u) | 8u;
L_101e81d0: ;
            wr8(ecx, (uint8_t)eax);
        }
        if ((int32_t)(ecx + 0x20u) < (int32_t)COW_IMG(0x103811f2u))
        {
            ecx = ecx + 0x20u;
            goto L_101e819d;
        }
        if ((int32_t)(ebx + 4u) < (int32_t)COW_IMG(0x106635f9u))
        {
            ebx = ebx + 4u;
            edi = edi + 0x20u;
            goto L_101e8182;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e81c2: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)edx + 9u);
    goto L_101e81c6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e80f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e80f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
