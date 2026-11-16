/* f_0x100fe230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100fe230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t2);
    wr8(sp0 + 4u, 0u);
    if ((uint16_t)arg4 == 0u)
    {
        eax = t1 & 0xffffff00u;
        goto L_100fe2d8;
    }
    eax = t1 & 0xffffff00u;
    ecx = t2;
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    ebp = arg4;
    esi = 0u;
    edi = arg3;
    loc_8 = t1;
    loc_4 = rd32(sp0 - 4u);
L_100fe25f: ;
    if ((uint8_t)ebx == 0u)
    {
        if (rd16(sp0 + 8u) == 0u)
        {
            wr8(sp0 + 4u, 0u);
        }
        else
        {
            t3 = rd32(sp0 + 8u);
            t4 = rd8(loc_8);
            wr8(sp0 + 4u, (uint8_t)t4);
            wr32(sp0 + 8u, t3 + 0xffffu);
            ecx = t3 + 0xffffu;
            edx = (edx & 0xffffff00u) | t4;
            loc_8 = loc_8 + 1u;
        }
        ebx = (ebx & 0xffffff00u) | 8u;
    }
    if ((uint16_t)(esi + 1u) < (uint8_t)arg5)
    {
        ecx = (ecx & 0xffff0000u) | (uint8_t)arg5;
        edx = (edx & 0xffffff00u) | ((((uint8_t)ebx - 1u & 0x1fu) != 0u ? rd8(sp0 + 4u) >> ((uint8_t)ebx - 1u & 0x1fu) : rd8(sp0 + 4u)) & 1u);
        esi = esi + 1u;
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u | ((((uint8_t)ebx - 1u & 0x1fu) != 0u ? rd8(sp0 + 4u) >> ((uint8_t)ebx - 1u & 0x1fu) : rd8(sp0 + 4u)) & 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u | ((((uint8_t)ebx - 1u & 0x1fu) != 0u ? rd8(sp0 + 4u) >> ((uint8_t)ebx - 1u & 0x1fu) : rd8(sp0 + 4u)) & 1u));
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
        goto L_100fe2cf;
    }
    ecx = (ecx & 0xffff0000u) | (uint8_t)arg5;
    edx = (edx & 0xffffff00u) | ((((uint8_t)ebx - 1u & 0x1fu) != 0u ? rd8(sp0 + 4u) >> ((uint8_t)ebx - 1u & 0x1fu) : rd8(sp0 + 4u)) & 1u);
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u | ((((uint8_t)ebx - 1u & 0x1fu) != 0u ? rd8(sp0 + 4u) >> ((uint8_t)ebx - 1u & 0x1fu) : rd8(sp0 + 4u)) & 1u));
    ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
    g->eax = loc_4;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall_cdecl(g, arg6, ecx, 1, loc_4);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(edi, (uint8_t)t5);
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_100fe2f1;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    eax = eax & 0xffffff00u;
    ebp = ebp + 0xffffu;
    esi = 0u;
    edi = edi + 1u;
L_100fe2cf: ;
    if ((uint16_t)ebp != 0u) goto L_100fe25f;
L_100fe2d8: ;
    wr8(arg3 + (uint16_t)arg4 - 1u, 0u);
    return eax & 0xffffff00u;
L_100fe2f1: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fe230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
