/* f_0x1012e1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1012e1a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 8u, self);
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101cb960u), 3, arg1, arg2, sp0 + 8u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = t2;
        if ((arg2 & 2u) == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x101cba20u), 3, arg1, arg2, sp0 + 8u);
    if ((uint8_t)t3 != 0u)
    {
        if ((arg2 & 2u) != 0u)
        {
            ebx = (ebx & 0xffffff00u) | 1u;
        }
    }
    if ((rd32(rd32(arg2 + 0x14bcu)) & 0x10u) == 0u)
    {
        eax = rd32(rd32(arg2 + 0x14bcu));
        edx = rd32(arg2 + 0x14bcu);
        goto L_1012e22c;
    }
    eax = rd32(rd32(arg2 + 0x14bcu));
    edx = rd32(arg2 + 0x14bcu);
    if (rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u) != 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u);
        goto L_1012e216;
    }
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e216: ;
    if ((uint8_t)ebx == 0u) goto L_1012e251;
    if (eax & 1u) goto L_1012e251;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e22c: ;
    if ((eax >> 8u & 0x20u) == 0u) goto L_1012e23f;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e23f: ;
    if ((uint8_t)ebx == 0u) goto L_1012e251;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e251: ;
    wr32(sp0 - 0x18u, 0u);
    t4 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x1cu, t4);
    g->ebx = ebx;
    g->esp = sp0 - 0x14u;
    t5 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t4, 2, t4, 0u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_1012e274;
    }
    edx = t6;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e274: ;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, 0u, sp0 + 4u, sp0 - 4u, 1u);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_1012e2b5;
    }
    eax = t7;
    edx = t8;
    if ((uint8_t)arg1 != rd8(arg1 + 2u))
    {
        edx = (edx & 0xffffff00u) | (uint8_t)arg1;
        goto L_1012e2b5;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg1;
    g->eax = rd32(rd32(sp0 - 8u));
    g->edx = edx;
    t9 = rd32(rd32(sp0 - 8u));
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, rd32(t9 + 0x54u), rd32(sp0 - 8u), 0);
    t11 = g->edx;
    if ((uint8_t)rd32(sp0 - 4u) == t10)
    {
        eax = 0x80404040u;
        edx = t11;
        goto L_1012e2ba;
    }
    edx = t11;
L_1012e2b5: ;
    eax = 0x80808080u;
L_1012e2ba: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e1a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
