/* f_0x101511a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101511a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu)) != 0u)
    {
        eax = (rd32(self + 8u) & 0xffffff00u) | rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
        loc_4 = (self & 0xffffff00u) | rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
        goto L_101511fb;
    }
    eax = (rd32(self + 8u) & 0xffffff00u) | rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
    ecx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    loc_4 = (self & 0xffffff00u) | rd8(COW_IMG(0x10371d60u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu));
    if ((uint16_t)arg1 != 0u) goto L_101512eb;
    if (rd16(sp0 + 8u) != 0xffffu) goto L_101512eb;
    if (rd32(self + 0xc0u) != 3u)
    {
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x100eba60u), 0);
        t1 = g->ecx;
        ecx = t1;
    }
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x100ebb00u), 3, 0u, arg3, 0u);
    eax = t2;
L_101512dc: ;
    wr32(self + 0xc4u, 3u);
    wr32(self + 0xc0u, 3u);
L_101512eb: ;
    return (eax & 0xffffff00u) | 1u;
L_101511fb: ;
    if ((uint8_t)eax == 0xffu) goto L_101512eb;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101512eb;
    edx = rd32(COW_IMG(0x104dfd98u));
    if ((uint16_t)arg1 == 0u) goto L_101512c9;
    if (rd16(sp0 + 8u) == 0xffffu) goto L_101512c9;
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    if ((uint16_t)eax == 0u) goto L_101512c9;
    wr8(sp0 + 8u, 1u);
    eax = (eax & 0xffffff00u) | 1u;
L_1015123c: ;
    if ((uint16_t)arg1 == rd8(edx + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c6u))
    {
        ecx = rd8(edx + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c6u);
        goto L_10151260;
    }
    ecx = rd8(edx + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c6u);
    wr8(sp0 + 8u, (uint8_t)((uint8_t)eax + 1u));
    if ((uint8_t)((uint8_t)eax + 1u) < 0xau)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
        goto L_1015123c;
    }
L_10151264: ;
    if (rd32(self + 0xc0u) != 3u)
    {
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x100eba60u), 0);
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    if (rd16(edx + (uint8_t)loc_4 * 8u + 0x194c4u) != 0u)
    {
        eax = edx + (uint8_t)loc_4 * 8u;
        ecx = loc_4;
        loc_14 = loc_4;
        if ((uint16_t)arg1 == rd8(eax + 0x194c6u))
        {
            edx = (edx & 0xffff0000u) | rd8(eax + 0x194c6u);
            g->esp = sp0 - 0x10u;
            t5 = cow_cdecl(g, COW_IMG(0x100ebb00u), 3, arg1, 0u, loc_14);
            eax = t5;
        }
        else
        {
            edx = (edx & 0xffff0000u) | rd8(eax + 0x194c6u);
            g->esp = sp0 - 0x10u;
            t4 = cow_cdecl(g, COW_IMG(0x100ebb00u), 3, arg1, arg3, loc_14);
            eax = t4;
        }
    }
    else
    {
        loc_14 = loc_4;
        g->esp = sp0 - 0x10u;
        t3 = cow_cdecl(g, COW_IMG(0x100ebb00u), 3, arg1, arg3, loc_14);
        eax = t3;
    }
    goto L_101512dc;
L_10151260: ;
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)eax;
    goto L_10151264;
L_101512c9: ;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x100ebb00u), 3, 0u, 0u, loc_4);
    eax = t6;
    goto L_101512dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101511a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101511a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
