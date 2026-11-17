/* f_0x102ee93f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ee93f(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(arg1 + 0x14u) + 4u) != 0u)
    {
        edx = in_edx;
        ebx = rd32(rd32(arg1 + 0x14u) + 4u);
        esi = rd32(arg1 + 0x14u);
        edi = rd32(rd32(arg1 + 0x14u));
        goto L_102ee966;
    }
    esi = rd32(arg1 + 0x14u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, rd32(esi + 0xcu), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_102ee9cf;
    }
    edx = t2;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102ee966: ;
    t3 = rd8(edi) << 8u;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 1u;
        loc_8 = t3;
        goto L_102ee984;
    }
    ecx = t3;
    loc_8 = t3;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        goto L_102ee9cf;
    }
    edx = t5;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102ee984: ;
    t6 = loc_8 + rd8(edi);
    if (t6 == 4u)
    {
        ecx = rd8(edi);
        ebx = ebx - 1u;
        edi = edi + 1u;
    }
    else
    {
        ebx = ebx - 1u;
        edi = edi + 1u;
        wr32(rd32(arg1) + 0x14u, 9u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
        t7 = g->edx;
        ecx = arg1;
        edx = t7;
    }
    if (ebx != 0u) goto L_102ee9b9;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        goto L_102ee9cf;
    }
    edx = t9;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102ee9b9: ;
    t10 = rd8(edi) << 8u;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 1u;
        loc_8 = t10;
        goto L_102ee9db;
    }
    ecx = t10;
    loc_8 = t10;
    g->eax = arg1;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    if ((uint8_t)t11 != 0u) goto L_102ee9d3;
    eax = t11;
L_102ee9cf: ;
    eax = eax & 0xffffff00u;
L_102eea11: ;
    return eax;
L_102ee9d3: ;
    ebx = rd32(esi + 4u);
    edi = rd32(esi);
L_102ee9db: ;
    t12 = loc_8 + rd8(edi);
    wr32(rd32(arg1) + 0x14u, 0x51u);
    wr32(rd32(arg1) + 0x18u, t12);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 0);
    wr32(arg1 + 0xfcu, t12);
    wr32(esi, edi + 1u);
    wr32(esi + 4u, ebx - 1u);
    eax = (t12 & 0xffffff00u) | 1u;
    goto L_102eea11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ee93f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ee93f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
