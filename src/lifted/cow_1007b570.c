/* f_0x1007b570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b570(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x103551e0u));
        ecx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007b58c;
    }
    return -arg3;
L_1007b58c: ;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, in_edx, 1, 2, 0x46u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_4 = self & 0xffffff00u;
        goto L_1007b617;
    }
    eax = t1;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t3;
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10313979u), 3, t3, 0u, 0xau);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x101a7ad0u), 1, t5);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        ebx = t5;
        goto L_1007b5c7;
    }
    edx = t9;
    g->edx = edx;
    return -arg3;
L_1007b5c7: ;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 8u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
        loc_4 = self & 0xffffff00u;
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
        esi = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        edi = COW_IMG(0x103580c0u);
        ecx = 5u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (zf)
        {
            eax = 0u;
        }
        else
        {
            eax = -cf + 1u - cf;
        }
        if (eax != 0u)
        {
            loc_4 = self & 0xffffff00u;
        }
        else
        {
            loc_4 = (self & 0xffffff00u) | 1u;
        }
    }
    t10 = (edx & 0xffff0000u) | (uint8_t)ebx;
    g->ebx = ebx;
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x101a7af0u), 2, t10, loc_4);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        goto L_1007b617;
    }
    edx = t12;
    g->ebx = in_ebx;
    g->edx = edx;
    return -arg3;
L_1007b617: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
