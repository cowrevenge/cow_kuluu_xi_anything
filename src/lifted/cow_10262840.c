/* f_0x10262840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10262840(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 4u, self);
    g->eax = rd32(t1);
    t2 = rd32(t1);
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, rd32(t2 + 0x14u), self, 1, t1);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_10262912;
    }
    edi = t1;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 + 0xcu);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, edi);
    t4 = rd32(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    g->eax = sp0 + 0xcu;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, rd32(t4 + 0xcu), t4, 4, edi, 1u, sp0 + 0xcu, sp0 - 8u);
    t6 = g->edx;
    if (t5 != 0u) goto L_10262900;
    edx = t6;
    ebx = 0u;
L_10262884: ;
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_102628a1;
    }
    wr32(sp0 - 0x18u, arg2);
    g->eax = arg2;
    g->edx = edx;
    t7 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x1026a570u), t7, 1, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        goto L_102628a1;
    }
    ecx = t9;
    edx = t10;
    esi = 0x80040207u;
L_102628d8: ;
    t16 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t16);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1026a640u), ecx, edx, 1, t16);
    if (esi == 0u) goto L_10262910;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 + 0xcu);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, edi);
    g->eax = sp0 + 0xcu;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall(g, rd32(rd32(edi) + 0xcu), rd32(edi), 4, edi, 1u, sp0 + 0xcu, sp0 - 8u);
    t18 = g->edx;
    if (t17 == 0u)
    {
        edx = t18;
        goto L_10262884;
    }
    if (ebx != 0u) goto L_10262905;
L_10262900: ;
    ebx = 0x80040207u;
L_10262905: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return ebx;
L_102628a1: ;
    t11 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t11);
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    t12 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x14u;
    t13 = cow_fastcall(g, COW_IMG(0x10262790u), t12, arg1, 2, arg1, t11);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        ecx = t14;
        edx = t15;
        esi = t13;
    }
    else
    {
        ecx = t14;
        edx = t15;
        esi = t13;
        if ((int32_t)ebx >= 0)
        {
            if (esi != 0x80004005u)
            {
                if (esi != 0x80070057u)
                {
                    if (esi != 0x8004022au)
                    {
                        ebx = esi;
                    }
                }
            }
        }
    }
    goto L_102628d8;
L_10262910: ;
    eax = 0u;
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_10262912: ;
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262840(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
