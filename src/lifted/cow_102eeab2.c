/* f_0x102eeab2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eeab2(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
    ebx = rd32(rd32(arg1 + 0x14u) + 4u);
    esi = rd32(arg1 + 0x14u);
    edi = rd32(rd32(arg1 + 0x14u));
L_102eead4: ;
    if (ebx != 0u) goto L_102eeae9;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_102eeb2b;
    }
    edx = t2;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102eeae9: ;
    if (rd8(edi) != 0xffu)
    {
        ebx = ebx - 1u;
        edi = edi + 1u;
        goto L_102eeac6;
    }
    ecx = rd8(edi);
    ebx = ebx - 1u;
    edi = edi + 1u;
L_102eeaf6: ;
    if (ebx != 0u) goto L_102eeb0b;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_102eeb2b;
    }
    edx = t4;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102eeb0b: ;
    if (rd8(edi) == 0xffu)
    {
        ecx = rd8(edi);
        ebx = ebx - 1u;
        edi = edi + 1u;
        goto L_102eeaf6;
    }
    ecx = rd8(edi);
    ebx = ebx - 1u;
    loc_8 = rd8(edi);
    edi = edi + 1u;
    if (ecx != 0u) goto L_102eeb2f;
    t5 = rd32(arg1 + 0x190u);
    wr32(t5 + 0x58u, rd32(t5 + 0x58u) + 2u);
    ecx = t5;
L_102eeacf: ;
    wr32(esi, edi);
    wr32(esi + 4u, ebx);
    goto L_102eead4;
L_102eeac6: ;
    t7 = rd32(arg1 + 0x190u);
    wr32(t7 + 0x58u, rd32(t7 + 0x58u) + 1u);
    ecx = t7;
    goto L_102eeacf;
L_102eeb2b: ;
    eax = eax & 0xffffff00u;
L_102eeb84: ;
    return eax;
L_102eeb2f: ;
    if (rd32(rd32(arg1 + 0x190u) + 0x58u) != 0u)
    {
        wr32(rd32(arg1) + 0x14u, 0x70u);
        t6 = rd32(rd32(arg1 + 0x190u) + 0x58u);
        wr32(rd32(arg1) + 0x18u, t6);
        wr32(rd32(arg1) + 0x1cu, loc_8);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 0);
        wr32(rd32(arg1 + 0x190u) + 0x58u, 0u);
        ecx = loc_8;
    }
    wr32(arg1 + 0x178u, ecx);
    wr32(esi, edi);
    wr32(esi + 4u, ebx);
    eax = (arg1 & 0xffffff00u) | 1u;
    goto L_102eeb84;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eeab2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eeab2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
