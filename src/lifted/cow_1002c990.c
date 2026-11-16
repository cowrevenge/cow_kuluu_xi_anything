/* f_0x1002c990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002c990(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t19;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd32(eax + 0x70u) == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = rd32(eax + 0x70u);
            t3 = rd32(eax + 0x120u);
            if (t3 >> 7u & 1u) goto L_1002c9c6;
            eax = t3;
            if (!(eax >> 8u & 1u))
            {
                ebx = in_ebx & 0xffffff00u;
                goto L_1002c9c8;
            }
L_1002c9c6: ;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
L_1002c9c8: ;
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
        loc_4 = self;
        goto L_1002cb2c;
    }
    eax = rd32(self + 0x34u);
    if (rd32(eax) == 0u)
    {
        loc_4 = rd32(eax);
        goto L_1002cb2c;
    }
    ecx = rd32(eax);
    loc_4 = rd32(eax);
    if (rd32(self + 0x38u) > 7u)
    {
        eax = rd32(self + 0x38u);
        goto L_1002cb2c;
    }
    eax = rd32(self + 0x38u);
    t4 = rd32(COW_IMG(0x1002cb60u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1002c9f4u: goto L_1002c9f4;
    case 0x1002ca29u: goto L_1002ca29;
    case 0x1002ca5cu: goto L_1002ca5c;
    case 0x1002ca86u: goto L_1002ca86;
    case 0x1002caacu: goto L_1002caac;
    case 0x1002cad1u: goto L_1002cad1;
    case 0x1002cafcu: goto L_1002cafc;
    case 0x1002cb33u: goto L_1002cb33;
    default: rt_fatal(g, COW_IMG(0x1002c9edu), "switch");
    }
    return 0;
L_1002c9f4: ;
    if ((uint8_t)ebx == 1u)
    {
        eax = 0u;
        goto L_1002ca0f;
    }
    eax = 0u;
L_1002c9fb: ;
    if (rd32(COW_IMG(0x1045b650u) + eax * 4u) == 0u) goto L_1002ca0a;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_1002c9fb;
    }
    eax = eax + 1u;
L_1002ca0a: ;
    if (eax == 0x10u) goto L_1002ca20;
L_1002ca0f: ;
    wr32(COW_IMG(0x1045b650u) + eax * 4u, self);
    wr32(self + 0x38u, 1u);
    wr32(self + 0x3cu, 0u);
L_1002ca20: ;
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
L_1002ca29: ;
    t6 = rd32(ecx + 0x36u);
    g->edx = self + 0x58u;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x1002cb80u), t6, self, g->edx, 0, 2, t6, self + 0x58u);
    t8 = g->edx;
    wr32(self + 0x3cu, 0u);
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        edx = t8;
        wr32(self + 0x38u, 2u);
    }
    else
    {
        eax = t7;
        edx = t8;
        wr32(self + 0x38u, 7u);
    }
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
    ecx = loc_4;
L_1002ca5c: ;
    t9 = rd32(ecx + 0x36u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1002ccb0u), self, 1, t9);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_1002cb2c;
    }
    eax = t10;
    edx = t11;
    wr32(self + 0x38u, 3u);
    wr32(self + 0x3cu, 0u);
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
    ecx = loc_4;
L_1002ca86: ;
    t12 = rd32(ecx + 0x36u);
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1002ce20u), self, 1, t12);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_1002cb2c;
    }
    eax = t13;
    edx = t14;
    wr32(self + 0x38u, 4u);
    wr32(self + 0x3cu, 0u);
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
L_1002caac: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x1002d310u), self, 1, 0u);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1002cb2c;
    }
    eax = t15;
    edx = t16;
    wr32(self + 0x38u, 5u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x8au, 0u);
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
    ecx = loc_4;
L_1002cad1: ;
    if (!(rd8(ecx + 0x34u) & 1u)) goto L_1002cae7;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1002d340u), self, 1, 0u);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        edx = t18;
        goto L_1002cb2c;
    }
    eax = t17;
    edx = t18;
    ecx = loc_4;
L_1002cae7: ;
    wr32(self + 0x38u, 6u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x8au, 0u);
    if ((uint8_t)ebx != 1u) goto L_1002cb2c;
L_1002cafc: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10071f60u), ecx, 0);
    t19 = g->edx;
    wr8(self + 0x68u, 1u);
    wr32(self + 0x38u, 8u);
    wr32(self + 0x3cu, 0u);
    eax = 0u;
    edx = t19;
L_1002cb11: ;
    if (rd32(COW_IMG(0x1045b650u) + eax * 4u) == self) goto L_1002cb20;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_1002cb11;
    }
    eax = eax + 1u;
L_1002cb20: ;
    if (eax != 0x10u)
    {
        wr32(COW_IMG(0x1045b650u) + eax * 4u, 0u);
    }
L_1002cb2c: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1002cb33: ;
    if ((uint8_t)ebx == 1u) goto L_1002cafc;
    t5 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t5);
    if ((int32_t)t5 < 3)
    {
        eax = t5;
        goto L_1002cb2c;
    }
    eax = t5;
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x38u, 7u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002c990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
