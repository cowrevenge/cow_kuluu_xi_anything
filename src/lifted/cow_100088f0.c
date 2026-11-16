/* f_0x100088f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100088f0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xa30u) != 0u)
    {
        edx = in_edx;
        esi = self + 0x8f0u;
        edi = 0u;
L_1000890e: ;
        if ((rd8(esi + 4u) & 0x80u) == 0u) goto L_10008963;
        if (rd32(esi) == 0xcu)
        {
            eax = rd32(esi) - 0xcu;
            goto L_10008943;
        }
        eax = rd32(esi) - 0xcu;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_1000892d;
        }
        eax = eax - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10124ad0u), rd32(COW_IMG(0x104e1d4cu)), 0);
            t1 = g->edx;
            edx = t1;
        }
L_1000895e: ;
        if ((rd8(esi + 4u) & 0x80u) != 0u) goto L_100089ae;
L_10008963: ;
        if (rd32(esi) == 0xcu)
        {
            eax = rd32(esi) - 0xcu;
            goto L_10008993;
        }
        eax = rd32(esi) - 0xcu;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_1000897d;
        }
        eax = eax - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10124b50u), rd32(COW_IMG(0x104e1d4cu)), 0);
            t5 = g->edx;
            edx = t5;
        }
L_100089ae: ;
        if (edi + 1u < rd32(self + 0xa30u))
        {
            esi = esi + 0x14u;
            edi = edi + 1u;
            goto L_1000890e;
        }
    }
    return;
L_1000892d: ;
    if (rd8(COW_IMG(0x10455c3au)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_10008959;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
    ecx = rd32(COW_IMG(0x104e1d4cu));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10124930u), ecx, 0);
    t2 = g->edx;
    edx = t2;
    goto L_1000895e;
L_10008943: ;
    if (rd8(COW_IMG(0x10455c3au)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_10008959;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
    ecx = rd32(COW_IMG(0x104e1d4cu));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10124930u), ecx, 0);
    t3 = g->edx;
    edx = t3;
    goto L_1000895e;
L_10008959: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10124a00u), ecx, 0);
    t4 = g->edx;
    edx = t4;
    goto L_1000895e;
L_1000897d: ;
    if (rd8(COW_IMG(0x10455c3au)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_100089a9;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
    ecx = rd32(COW_IMG(0x104e1d4cu));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101249e0u), ecx, 0);
    t6 = g->edx;
    edx = t6;
    goto L_100089ae;
L_10008993: ;
    if (rd8(COW_IMG(0x10455c3au)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_100089a9;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3au));
    ecx = rd32(COW_IMG(0x104e1d4cu));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101249e0u), ecx, 0);
    t7 = g->edx;
    edx = t7;
    goto L_100089ae;
L_100089a9: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10124ab0u), ecx, 0);
    t8 = g->edx;
    edx = t8;
    goto L_100089ae;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100088f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100088f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
