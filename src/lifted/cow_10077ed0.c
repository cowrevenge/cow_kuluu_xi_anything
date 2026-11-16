/* f_0x10077ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10077ed0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    if ((int32_t)rd16(COW_IMG(0x1032c9c8u) + rd8(COW_IMG(0x103579eau)) * 4u) < 18)
    {
        edx = rd16(COW_IMG(0x1032c9c8u) + rd8(COW_IMG(0x103579eau)) * 4u);
        ebx = rd16(COW_IMG(0x1032c9ccu) + rd8(COW_IMG(0x103579eau)) * 4u);
        esi = rd16(COW_IMG(0x1032c9cau) + rd8(COW_IMG(0x103579eau)) * 4u);
        goto L_10077f07;
    }
    eax = rd8(COW_IMG(0x103579eau)) << 2u;
    return eax & 0xffffff00u;
L_10077f07: ;
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, COW_IMG(0x1047d3a8u));
    wr32(sp0 - 0x70u, edx);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t1 = cow_cdecl(g, COW_IMG(0x101f0060u), 4, edx, COW_IMG(0x1047d3a8u), 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (rd8(COW_IMG(0x1047d4a4u)) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047d4a4u));
        }
        else
        {
            wr32(sp0 - 0x60u, sp0 - 0x54u);
            wr32(sp0 - 0x48u, rd16(eax));
            g->ebx = ebx;
            g->ecx = rd16(eax);
            g->edx = sp0 - 0x54u;
            t4 = rd16(eax);
            t5 = rd32(sp0 - 0x4cu);
            g->esp = sp0 - 0x5cu;
            cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t6 = g->ecx;
            t7 = g->edx;
            wr8(COW_IMG(0x1047d4a4u), 0u);
            ecx = t6;
            edx = t7;
        }
        wr32(sp0 - 0x60u, sp0 - 0x54u);
        g->ebx = ebx;
        g->edx = edx;
        t8 = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x5cu;
        t9 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t10 = g->edx;
        wr8(COW_IMG(0x1047d4a5u), 1u);
        eax = t9;
        edx = t10;
    }
    if (ebx == 0x12u)
    {
        if (rd8(COW_IMG(0x1047d4a5u)) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d4a5u));
        }
        else
        {
            wr32(sp0 - 0x60u, sp0 - 0x54u);
            g->ebx = ebx;
            g->esp = sp0 - 0x5cu;
            t11 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            eax = t11;
        }
    }
    t12 = rd8(COW_IMG(0x103579eau));
    t13 = rd32(sp0 - 0x58u);
    t14 = rd32(sp0 - 0x5cu);
    wr8(COW_IMG(0x103579eau), (uint8_t)(t12 + 1u));
    g->ebx = t13;
    g->esi = t14;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
