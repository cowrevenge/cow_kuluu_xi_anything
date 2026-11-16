/* f_0x101491a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101491a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_101492b8;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_call_regs(g, COW_IMG(0x100991d0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    g->edi = self;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x10161010u), 1, arg1);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x10160f30u), rd32(COW_IMG(0x106218fcu)), 1, arg1);
    if (t5 == 0u) goto L_10149480;
    eax = t5;
    loc_14 = t1;
    loc_10 = t3;
    t6 = rd32(eax + 4u);
    t7 = rd32(eax + 8u);
    if (rd8(COW_IMG(0x10485640u)) == 0u)
    {
        ecx = (rd32(eax) & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        eax = t7;
        edx = t6;
        loc_8 = t6;
        loc_24 = 0u;
    }
    else
    {
        ecx = (rd32(eax) & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        edx = t6;
        pf = PARITY(rd8(COW_IMG(0x10485640u)));
        zf = rd8(COW_IMG(0x10485640u)) == 0u;
        sf = (int8_t)rd8(COW_IMG(0x10485640u)) < 0;
        loc_8 = t6;
        t8 = 1u << (ecx & 0x1fu);
        eax = t8;
        loc_24 = t8;
    }
    if (arg1 == 0x1au)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t9 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc98u);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        else
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)((uint8_t)loc_8 + 5u);
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t12 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xc99u);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)((uint8_t)loc_8 + 5u);
        }
        if ((uint8_t)loc_8 <= 0x64u)
        {
            eax = (eax & 0xffffff00u) | 0x64u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 0x64u;
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
        }
    }
    if (rd8(sp0 + 0xcu) == 0u)
    {
        loc_28 = 0u;
    }
    else
    {
        t15 = rd32(arg2 * 4u + self + 0x60u);
        t16 = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
        g->eax = arg2;
        g->esp = sp0 - 0x38u;
        t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), t16, rd32(self + 0x5cu), 4, 0u, 0xeu, t15, 0x80808080u);
        t18 = cow_fastcall(g, COW_IMG(0x101f4b20u), t16, (uint8_t)loc_8, 4, 6u, 7u, (uint8_t)loc_8, 0x80808080u);
        t19 = g->edx;
        wr32(t16 + 0x48u, 0xffffffffu);
        wr8(self + 0x51u, (uint8_t)(rd8(self + 0x51u) + 1u));
        edx = t19;
        loc_28 = 0u;
    }
L_101492c4: ;
    t20 = arg1 * 0x20u + loc_28;
    ebx = t20;
    loc_20 = t20;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_101492da: ;
    if (arg1 == 0u)
    {
        ecx = rd32(COW_IMG(0x106218fcu));
        esi = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
        g->edx = loc_28;
        g->esp = sp0 - 0x3cu;
        t23 = cow_thiscall(g, COW_IMG(0x10160f00u), ecx, 1, loc_28);
        t24 = g->edx;
        edx = t24;
        ebp = t23;
        loc_2c = t23;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x51u) * 0x15u;
        ecx = rd32(COW_IMG(0x106218fcu));
        esi = rd32(self + 0x5cu) + (uint32_t)(int8_t)rd8(self + 0x51u) * 0x54u;
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t21 = cow_fastcall(g, COW_IMG(0x10160ef0u), ecx, edx, 1, ebx);
        t22 = g->edx;
        edx = t22;
        ebp = t21;
        loc_2c = t21;
    }
    if (ebp != 0u)
    {
        if (rd16(ebp) != 0u)
        {
            if (arg1 == 0u) goto L_10149409;
            g->edi = self;
            g->ecx = rd32(COW_IMG(0x106218fcu));
            g->edx = edx;
            t25 = rd32(COW_IMG(0x106218fcu));
            g->esp = sp0 - 0x3cu;
            t26 = cow_stdcall(g, COW_IMG(0x10160fb0u), 1, ebx);
            t27 = g->ecx;
            t28 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                ecx = t27;
                edx = t28;
                loc_1c = t26;
                wr32(sp0 + 0xcu, 0u);
            }
            else
            {
                eax = t26;
                edx = t28;
                loc_1c = t26;
                t29 = rd8(eax + 2u);
                wr32(sp0 + 0xcu, t29);
                ecx = t29;
            }
            if (rd8(self + 0x52u) == 0u)
            {
                ebx = 0x80404040u;
                loc_18 = 0x80404040u;
            }
            else
            {
                ecx = (ecx & 0xffffff00u) | rd8(self + 0x52u);
                if (arg1 != 0x1au) goto L_10149397;
                if (rd8(COW_IMG(0x10485641u)) < 0x60u)
                {
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                    goto L_101493dd;
                }
                g->eax = eax;
                g->esp = sp0 - 0x3cu;
                t30 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0x80bu);
                if ((uint8_t)t30 == 0u)
                {
                    eax = loc_1c;
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                    goto L_101493dd;
                }
                eax = loc_1c;
                ebp = loc_2c;
L_10149397: ;
                if ((loc_24 & rd32(ebp + 8u)) == 0u)
                {
                    ebx = 0x80404040u;
                    loc_18 = 0x80404040u;
                }
                else
                {
                    edx = loc_24;
                    if (loc_14 == 0u)
                    {
                        ebx = rd32(COW_IMG(0x10371858u) + arg2 * 4u);
                        loc_18 = 0x80404040u;
                    }
                    else
                    {
                        ebx = rd32(COW_IMG(0x10371858u) + arg2 * 4u);
                        ebp = loc_14;
                        if ((int32_t)rd32(sp0 + 0xcu) > (int32_t)(rd8(ebp + 2u) & 0x7fu))
                        {
                            loc_18 = 0x80404040u;
                        }
                        else
                        {
                            if ((int32_t)loc_10 >= (int32_t)(uint8_t)loc_8)
                            {
                                loc_18 = 0x80404040u;
                            }
                            else
                            {
                                loc_18 = 0x80808080u;
                            }
                        }
                    }
                }
            }
L_101493dd: ;
            if (eax == 0u)
            {
                ebp = 0u;
            }
            else
            {
                t31 = rd8(eax + 3u);
                ebp = t31;
            }
            if (ebp != rd8(loc_2c + 4u))
            {
                eax = rd8(loc_2c + 4u);
                goto L_10149403;
            }
            eax = rd8(loc_2c + 4u);
            loc_1c = 0x802060a0u;
L_10149411: ;
            wr32(sp0 + 0xcu, 0xffffffffu);
L_10149419: ;
            g->esp = sp0 - 0x3cu;
            cow_fastcall(g, COW_IMG(0x101f4b20u), esi, loc_20, 4, 1u, 0x1eu, loc_20, ebx);
            t32 = g->edx;
            g->eax = loc_1c;
            t33 = cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t32, 4, 3u, 8u, ebp + 1u, loc_1c);
            t34 = rd32(sp0 + 0xcu) + 1u;
            cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t34, 4, 5u, 0x1fu, t34, loc_18);
            t35 = g->edx;
            wr32(esi + 0x48u, (uint32_t)(int16_t)rd16(loc_2c));
            wr8(self + 0x51u, (uint8_t)(rd8(self + 0x51u) + 1u));
            edx = t35;
            ebx = loc_20;
        }
    }
    if ((int32_t)(loc_28 + 1u) < 32)
    {
        loc_28 = loc_28 + 1u;
        loc_20 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_101492d6;
    }
L_10149480: ;
    g->edi = in_edi;
    return;
L_101492b8: ;
    edx = in_edx;
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = 1u;
    loc_24 = 0u;
    goto L_101492c4;
L_101492d6: ;
    goto L_101492da;
L_10149403: ;
    loc_1c = ebx;
    goto L_10149419;
L_10149409: ;
    eax = arg1;
    ebx = 0x80808080u;
    ebp = 0xffffffffu;
    goto L_10149411;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101491a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101491a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
