/* f_0x102f5cdc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f5cdc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if ((int32_t)rd32(in_ebx + 0x120u) > 0)
    {
        ecx = self;
        edx = in_edx;
        loc_c = 0u;
        loc_8 = in_ebx + 0x124u;
L_102f5cfa: ;
        if (rd32(rd32(loc_8) + 0x4cu) == 0u)
        {
            eax = rd32(loc_8);
            loc_10 = rd32(loc_8);
            if ((int32_t)rd32(eax + 0x10u) < 0)
            {
                esi = rd32(eax + 0x10u);
                goto L_102f5d1e;
            }
            esi = rd32(eax + 0x10u);
            if ((int32_t)esi >= 4) goto L_102f5d1e;
            if (rd32(esi * 4u + in_ebx + 0x90u) != 0u) goto L_102f5d32;
L_102f5d1e: ;
            wr32(rd32(in_ebx) + 0x14u, 0x33u);
            wr32(rd32(in_ebx) + 0x18u, esi);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(in_ebx)), ecx, 0);
            t1 = g->edx;
            ecx = in_ebx;
            edx = t1;
L_102f5d32: ;
            g->eax = rd32(in_ebx + 4u);
            g->edx = edx;
            t2 = rd32(in_ebx + 4u);
            g->esp = sp0 - 0x24u;
            t3 = cow_thiscall(g, rd32(t2), ecx, 0);
            t4 = g->edx;
            t5 = rd32(esi * 4u + in_ebx + 0x90u);
            esi = t5;
            edi = t3;
            ecx = 0x20u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
            wr32(loc_10 + 0x4cu, t3);
            ecx = loc_10;
            edx = t4;
        }
        if ((int32_t)(loc_c + 1u) < (int32_t)rd32(in_ebx + 0x120u))
        {
            loc_c = loc_c + 1u;
            loc_8 = loc_8 + 4u;
            goto L_102f5cfa;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5cdc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f5cdc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
